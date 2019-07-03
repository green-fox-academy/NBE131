// create a function that draws one square and takes 2 parameters:
// the x and y coordinates of the square's top left corner
// and draws a 50x50 square from that point.
// draw at least 3 squares with that function.
// avoid code duplication.

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void squareFiftyPx(int cornerX, int cornerY, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    for (int i = 0; i < 11; ++i) {

        //randomize position

        int cornerX = rand() % (int) (SCREEN_WIDTH * 0.75);
        int cornerY = rand() % (int) (SCREEN_HEIGHT * 0.75);

        squareFiftyPx(cornerX, cornerY, gRenderer);

    }

}

void squareFiftyPx(int cornerX, int cornerY, SDL_Renderer *gRenderer)
{
    //randomize color

    int colorR = rand() % 254;
    int colorG = rand() % 254;
    int colorB = rand() % 254;

    //set color
    SDL_SetRenderDrawColor(gRenderer, colorR, colorB, colorG, 0xFF);
//create a rectangle
    SDL_Rect fillRect = {cornerX, cornerY, 50, 50};

//draw rectangle
    SDL_RenderFillRect(gRenderer, &fillRect);

}


