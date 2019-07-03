#include "draw.h"


// draw a red horizontal line to the canvas' middle.
// draw a green vertical line to the canvas' middle.

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer* gRenderer) {
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//draw line
    SDL_RenderDrawLine(gRenderer, 0, SCREEN_HEIGHT/2, SCREEN_WIDTH, SCREEN_HEIGHT/2);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH/2, 0, SCREEN_WIDTH/2, SCREEN_HEIGHT);


}

//
// Created by Dell on 2019. 07. 03..
//

