// Draw the night sky:
//  - The background should be black
//  - The stars can be small squares
//  - The stars should have random positions on the canvas
//  - The stars should have random color (some shade of grey)
//
// You might have to make modifications somewhere else to create a black background ;)

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;



void draw(SDL_Renderer *gRenderer)
{
    //srand(time(0));

    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(gRenderer);



    for (int i = 0; i < 50; ++i) {



//randomize size

        int rectangleWidth = rand() % 10;
        int rectangleHeight = rectangleWidth;


//randomize position

        int cornerX = rand() % (int) (SCREEN_WIDTH * 0.95);
        int cornerY = rand() % (int) (SCREEN_HEIGHT * 0.95);


        //instead randomizing color, make size ("distance") and brightness proportional)

        int colorR = rectangleWidth * 25;
        int colorG = colorR;
        int colorB = colorR;

        //choose color
        SDL_SetRenderDrawColor(gRenderer, colorR, colorG, colorB, 0xFF);
        //create a rectangle
        SDL_Rect fillRect = {cornerX, cornerY, rectangleWidth, rectangleHeight};

//draw rectangle
        SDL_RenderFillRect(gRenderer, &fillRect);
    }
}



