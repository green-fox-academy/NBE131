// Draw the canvas' diagonals.
// If it starts from the upper-left corner it should be green, otherwise it should be red.


#include "draw.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer *gRenderer)
{
//choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//draw line
    SDL_RenderDrawLine(gRenderer, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
//choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//draw line
    SDL_RenderDrawLine(gRenderer, 0, SCREEN_HEIGHT, SCREEN_WIDTH, 0);


}