// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer *gRenderer)
{

    srand(time(0));

    for (int i = 0; i < 4; ++i) {



//randomize size

        int rectangleWidth = rand() % 150;
        int rectangleHeight = rand() % 100;


//randomize position

        int cornerX = rand() % (int) (SCREEN_WIDTH * 0.75);
        int cornerY = rand() % (int) (SCREEN_HEIGHT * 0.75);


        //randomize color

        int colorR = rand() % 254;
        int colorG = rand() % 254;
        int colorB = rand() % 254;

        //choose color
        SDL_SetRenderDrawColor(gRenderer, colorR, colorG, colorB, 0xFF);
        //create a rectangle
        SDL_Rect fillRect = {cornerX, cornerY, rectangleWidth, rectangleHeight};

//draw rectangle
        SDL_RenderFillRect(gRenderer, &fillRect);
    }
}


