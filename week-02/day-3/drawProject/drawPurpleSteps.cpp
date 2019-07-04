// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r3.png]
// Pay attention for the outlines as well

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void outlinedSquareTwentyPx(int cornerX, int cornerY, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    int cornerX = 0;
    int cornerY = 0;

    for (int i = 0; i < 19; ++i) {

        //randomize position

        //int cornerX = rand() % (int) (SCREEN_WIDTH * 0.75);
        //int cornerY = rand() % (int) (SCREEN_HEIGHT * 0.75);

        outlinedSquareTwentyPx(cornerX, cornerY, gRenderer);
        cornerX = cornerX + 20;
        cornerY = cornerY + 20;

    }

}

void outlinedSquareTwentyPx(int cornerX, int cornerY, SDL_Renderer *gRenderer)
{
    //randomize color

    // int colorR = rand() % 254;
    //int colorG = rand() % 254;
    //int colorB = rand() % 254;


    //set square color
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 255, 0xFF);
//create a rectangle
    SDL_Rect fillRect = {cornerX, cornerY, 20, 20};

//draw rectangle
    SDL_RenderFillRect(gRenderer, &fillRect);

    //set outline color
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 100);
//create a rectangle
    SDL_Rect outline = {cornerX, cornerY, 20, 20};

//draw outline
    SDL_RenderDrawRect(gRenderer, &outline);


}

