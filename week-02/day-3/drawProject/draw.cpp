#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//draw line
    SDL_RenderDrawLine(gRenderer, 0, 0, 200, 200);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0x18);
//create a rectangle
    SDL_Rect fillRect = { 100, 100, 200, 200};
//draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );

}

//
// Created by Dell on 2019. 07. 03..
//

