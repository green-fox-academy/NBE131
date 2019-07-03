// Draw a green 100x100 square to the canvas' center.

#include "draw.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer* gRenderer) {

    auto squareSize =177;
    int cornerX = (SCREEN_WIDTH - squareSize) / 2;
    int cornerY = (SCREEN_HEIGHT - squareSize) / 2;

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x74, 0xD4, 0x44, 0xFF);
//create a rectangle
    SDL_Rect fillRect = { cornerX, cornerY, squareSize, squareSize};

//draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );

}

