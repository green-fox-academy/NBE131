// Create a square drawing function that takes 2 parameters:
// The square size, and the fill color,
// and draws a square of that size and color to the center of the canvas.
// Create a loop that fills the canvas with a rainbow of colored squares.

#include "draw.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

std::vector <std::vector<int>> colorSet = {
        {255, 0,   0},
        {255, 127, 0},
        {255, 255, 0},
        {127, 255, 0},
        {0,   255, 0},
        {0,   255, 127},
        {0,   255, 255},
        {0,   127, 255},
        {0,   0,   255},
        {127, 0,   255},
        {255, 0,   255},
        {255, 0,   127}
};

void centerBox(int squareSize, std::vector<int> fillColor, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    int squareSize = SCREEN_HEIGHT;

    for (int i = 0; i < 11; ++i) {

        //randomize color vector
        //int colorR = rand() % 254;
        //int colorG = rand() % 254;
        //int colorB = rand() % 254;
        //std::vector<int> fillColor = {colorR, colorG, colorB};


        std::vector<int> fillColor = colorSet[i];

        centerBox(squareSize, fillColor, gRenderer);

        squareSize = squareSize - 40;
    }

}

void centerBox(int squareSize, std::vector<int> fillColor, SDL_Renderer *gRenderer)
{

    //set color
    SDL_SetRenderDrawColor(gRenderer, fillColor[0], fillColor[1], fillColor[2], 0xFF);

    // center on screen
    int cornerX = (SCREEN_WIDTH - squareSize) / 2;
    int cornerY = (SCREEN_HEIGHT - squareSize) / 2;

    //create a rectangle
    SDL_Rect fillRect = {cornerX, cornerY, squareSize, squareSize};

    //draw rectangle
    SDL_RenderFillRect(gRenderer, &fillRect);
}