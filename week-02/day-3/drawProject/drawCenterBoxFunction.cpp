// create a function that draws one square and takes 1 parameters:
// the square size
// and draws a square of that size to the center of the canvas.
// draw at least 3 squares with that function.
// the squares should not be filled otherwise they will hide each other
// avoid code duplication.

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void centerBox(int squareSize, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    int squareSize = SCREEN_HEIGHT;


    for (int i = 0; i < 11; ++i) {

        centerBox(squareSize, gRenderer);
        squareSize = squareSize - 40;

    }

}

void centerBox(int squareSize, SDL_Renderer *gRenderer)
{
    //randomize color
    int colorR = rand() % 254;
    int colorG = rand() % 254;
    int colorB = rand() % 254;

    //set color
    SDL_SetRenderDrawColor(gRenderer, colorR, colorB, colorG, 0xFF);

    // center on screen
    int cornerX = (SCREEN_WIDTH - squareSize) / 2;
    int cornerY = (SCREEN_HEIGHT - squareSize) / 2;


    //create a rectangle
    SDL_Rect emptyRect = {cornerX, cornerY, squareSize, squareSize};

    //draw rectangle
    SDL_RenderDrawRect(gRenderer, &emptyRect);
}