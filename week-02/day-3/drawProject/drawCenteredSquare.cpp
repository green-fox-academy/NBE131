// Draw a green 100x100 square to the canvas' center.

#include "draw.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer* gRenderer) {

    auto squareSize =100;
    int cornerX = (SCREEN_WIDTH - squareSize) / 2;
    int cornerY = (SCREEN_HEIGHT - squareSize) / 2;

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
//create a rectangle
    SDL_Rect fillRect = { cornerX, cornerY, squareSize, squareSize};

//draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );

}

