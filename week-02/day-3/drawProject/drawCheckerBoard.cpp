// Fill the canvas with a checkerboard pattern.

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void outlinedSquareSixtyPx(int cornerX, int cornerY, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    auto cornerX = 0;
    auto cornerY = 0;

    for (int r = 0; r < 12; ++r) {


        for (int c = 0; c < 16; ++c) {
            if ((c % 2) == 0) {
                outlinedSquareSixtyPx(cornerX, cornerY, gRenderer);
                cornerX = cornerX + 80;

            }

        }
        cornerY = cornerY + 40;
        if ((r % 2) != 0) {
            cornerX = 0;
        } else {
            cornerX = 40;
        }


    }

}

void outlinedSquareSixtyPx(int cornerX, int cornerY, SDL_Renderer *gRenderer)
{
    //randomize color

    //int colorR = rand() % 254;
    //int colorG = rand() % 254;
    //int colorB = rand() % 254;


    //set square color
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0xFF);
    //create a rectangle
    SDL_Rect fillRect = {cornerX, cornerY, 40, 40};

    //draw rectangle
    SDL_RenderFillRect(gRenderer, &fillRect);
}