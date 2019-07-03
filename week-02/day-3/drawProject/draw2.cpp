#include "draw.h"
// Draw a box that has different colored lines on each edge.
// The center of the box should align with the center of the screen.

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int boxHeight = 231;
const int boxWidth = 301;

void draw(SDL_Renderer *gRenderer)
{

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//draw upper line
    SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH - boxWidth) / 2, (SCREEN_HEIGHT - boxHeight) / 2,
                       (SCREEN_WIDTH - boxWidth) / 2 + boxWidth, (SCREEN_HEIGHT - boxHeight) / 2);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    // draw lower line
    SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH - boxWidth) / 2, (SCREEN_HEIGHT - boxHeight) / 2 + boxHeight,
                       (SCREEN_WIDTH - boxWidth) / 2 + boxWidth, (SCREEN_HEIGHT - boxHeight) / 2 + boxHeight);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0xFF, 0xFF);
    // draw left line
    SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH - boxWidth) / 2, (SCREEN_HEIGHT - boxHeight) / 2,
                       (SCREEN_WIDTH - boxWidth) / 2, (SCREEN_HEIGHT - boxHeight) / 2 + boxHeight);
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    // draw right line
    SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH - boxWidth) / 2 + boxWidth, (SCREEN_HEIGHT - boxHeight) / 2,
                       (SCREEN_WIDTH - boxWidth) / 2 + boxWidth, (SCREEN_HEIGHT - boxHeight) / 2 + boxHeight);

// would be nicer loading up a matrix based on the box sizes, and than getting the x-y coordinates into the drawer functions from there
}



//
// Created by Dell on 2019. 07. 03..
//

