/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "linked_list.h"


/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */


typedef enum move_direction {
  UP, DOWN, LEFT, RIGHT, STOP, OVER,
} move_direction_t;




/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

#define I2C_ADDRESS_LEDMATRIX (0b11100000)

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc3;

I2C_HandleTypeDef hi2c1;

osThreadId defaultTaskHandle;
osThreadId JoystickInputHaHandle;
osThreadId snakeMoveTaskHandle;
osThreadId displayTaskHandle;
osMutexId directionChangeMutexHandle;
/* USER CODE BEGIN PV */

uint8_t screen_content[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


uint8_t x_snake = 0;
uint8_t y_snake = 5;
uint8_t x_food;
uint8_t y_food;
uint8_t score = 0;


const uint8_t visconti_snake[] =
{
    0x00, 0xa0, 0x48, 0xd4, 0xd5, 0xd2, 0x20, 0x00
};


const uint8_t visconti_snake2[] =
{
    0xa0, 0x40, 0x48, 0xd4, 0xd5, 0xd2, 0x20, 0x00
};


int xJ = 0;
int yJ = 0;

coord_t def_coord1 = {0,5};
coord_t def_coord2 = {0,6};
coord_t def_coord3 = {0,7};


HAL_StatusTypeDef Status;

move_direction_t direction = STOP;

node_t *head;
node_t **headptr = &head;


/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC3_Init(void);
static void MX_I2C1_Init(void);
void StartDefaultTask(void const * argument);
void StartJoystickInputHandlerTask(void const * argument);
void StartSnakeMoveTask(void const * argument);
void StartDisplayTask(void const * argument);

/* USER CODE BEGIN PFP */

void clear_led_matrix();
void set_led_matrix(const uint8_t* data);

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

void clear_led_matrix(){
  uint8_t buff[2];

  for(int i=0; i<16; i++)
  {
    buff[0] = i;
    buff[1] = 0x00;
    HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, buff, 2, 100);
  }
}


void set_led_matrix(const uint8_t* data){
  clear_led_matrix();
  uint8_t buff[2];

  for(int i=0; i<8; i++)
  {
      buff[0] = i*2;
      buff[1] = (data[i] >> 1) | (data[i] << 7);
      HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, buff, 2, 100);
  }
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_ADC3_Init();
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */

  //init LED matrix
     uint8_t init1 = 0b00100001;
     uint8_t init2 = 0b10000001;

     HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, &init1, 1, 100);
     HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, &init2, 1, 100);


      init_list(headptr);
      push_back(headptr, def_coord1);
      push_back(headptr, def_coord2);
      push_back(headptr, def_coord3);


  /* USER CODE END 2 */

  /* Create the mutex(es) */
  /* definition and creation of directionChangeMutex */
  osMutexDef(directionChangeMutex);
  directionChangeMutexHandle = osMutexCreate(osMutex(directionChangeMutex));

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of JoystickInputHa */
  osThreadDef(JoystickInputHa, StartJoystickInputHandlerTask, osPriorityNormal, 0, 128);
  JoystickInputHaHandle = osThreadCreate(osThread(JoystickInputHa), NULL);

  /* definition and creation of snakeMoveTask */
  osThreadDef(snakeMoveTask, StartSnakeMoveTask, osPriorityNormal, 0, 128);
  snakeMoveTaskHandle = osThreadCreate(osThread(snakeMoveTask), NULL);

  /* definition and creation of displayTask */
  osThreadDef(displayTask, StartDisplayTask, osPriorityNormal, 0, 128);
  displayTaskHandle = osThreadCreate(osThread(displayTask), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* Start scheduler */
  osKernelStart();
  
  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 10;
  RCC_OscInitStruct.PLL.PLLN = 210;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
  PeriphClkInitStruct.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC3_Init(void)
{

  /* USER CODE BEGIN ADC3_Init 0 */

  /* USER CODE END ADC3_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC3_Init 1 */

  /* USER CODE END ADC3_Init 1 */
  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion) 
  */
  hadc3.Instance = ADC3;
  hadc3.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
  hadc3.Init.Resolution = ADC_RESOLUTION_12B;
  hadc3.Init.ScanConvMode = ADC_SCAN_ENABLE;
  hadc3.Init.ContinuousConvMode = DISABLE;
  hadc3.Init.DiscontinuousConvMode = ENABLE;
  hadc3.Init.NbrOfDiscConversion = 1;
  hadc3.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc3.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc3.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc3.Init.NbrOfConversion = 2;
  hadc3.Init.DMAContinuousRequests = DISABLE;
  hadc3.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc3) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time. 
  */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_84CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc3, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time. 
  */
  sConfig.Channel = ADC_CHANNEL_8;
  sConfig.Rank = ADC_REGULAR_RANK_2;
  if (HAL_ADC_ConfigChannel(&hadc3, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC3_Init 2 */

  /* USER CODE END ADC3_Init 2 */

}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.Timing = 0x00A0A3F7;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Analogue filter 
  */
  if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Digital filter 
  */
  if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
    
    
    
    
    
    

  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */ 
}

/* USER CODE BEGIN Header_StartJoystickInputHandlerTask */
/**
* @brief Function implementing the JoystickInputHa thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartJoystickInputHandlerTask */
void StartJoystickInputHandlerTask(void const * argument)
{
  /* USER CODE BEGIN StartJoystickInputHandlerTask */
  /* Infinite loop */
  for(;;)
  {
    HAL_ADC_Start(&hadc3);

   // osDelay(1);

                        if (HAL_ADC_PollForConversion(&hadc3, 100) == HAL_OK) {

                          xJ = HAL_ADC_GetValue(&hadc3);
                        }

                        HAL_ADC_Start(&hadc3);

                     //   osDelay(1);

                        Status = HAL_ADC_PollForConversion(&hadc3, 100);

                        if (Status == HAL_OK) {

                          yJ = HAL_ADC_GetValue(&hadc3);
                        }
if (xJ < 1000) {
  direction = LEFT;
//osDelay(150);
}


if (xJ > 3000) {
  direction = RIGHT;
  //osDelay(150);
}


if (yJ < 1000) {
  direction = UP;
  //osDelay(150);
}


if (yJ > 3000) {
  direction = DOWN;
 // osDelay(150);
}

osDelay(150);


  }
  /* USER CODE END StartJoystickInputHandlerTask */
}

/* USER CODE BEGIN Header_StartSnakeMoveTask */
/**
* @brief Function implementing the snakeMoveTask thread.
* @param argument: Not used
* @retval None
*/



/* USER CODE END Header_StartSnakeMoveTask */
void StartSnakeMoveTask(void const * argument)
{
  /* USER CODE BEGIN StartSnakeMoveTask */
  /* Infinite loop */
  for(;;)
  {

    switch (direction) {
    case UP:
      y_snake = y_snake + 1;
      if(y_snake == 8){
            direction = OVER;
          }
      break;

    case DOWN:
      y_snake = y_snake - 1;
      if(y_snake == 255){
            direction = OVER;
          }
      break;

    case LEFT:
      x_snake = x_snake - 1;
      if(x_snake == 255){
               direction = OVER;
             }
      break;

    case RIGHT:
      x_snake = x_snake + 1;

     if(x_snake == 8){
            direction = OVER;
     }
      break;
    }


    pop_back(head);
    coord_t new_head = {x_snake, y_snake};
    push_front(headptr, new_head);


    osDelay(400);

    }



  /* USER CODE END StartSnakeMoveTask */
}

/* USER CODE BEGIN Header_StartDisplayTask */
/**
* @brief Function implementing the displayTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartDisplayTask */
void StartDisplayTask(void const * argument)
{
  /* USER CODE BEGIN StartDisplayTask */
  /* Infinite loop */
  for(;;)
  {
    if (direction == UP || direction == DOWN || direction == LEFT || direction == RIGHT) {
    for (int i = 0; i<8; i++)
      {
        screen_content[i] = 0x00;
      }

    node_t* p = head;

    for (int i = 0; i < size(head); i++){


      screen_content [p->data.snake_x] |= (0b1 << p->data.snake_y);

      p = p->next;
    }
         set_led_matrix(screen_content);

         osDelay(40);
    }

    if(direction == OVER) {
      for (int i= 0; i<3; i++){


      set_led_matrix(visconti_snake);
      osDelay (400);


      set_led_matrix(visconti_snake2);
      osDelay (400);
      }

      clear_led_matrix();
      x_snake = 0;
      y_snake = 5;

      direction = STOP;



    }
    }


  /* USER CODE END StartDisplayTask */
}

/**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM14 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM14) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
