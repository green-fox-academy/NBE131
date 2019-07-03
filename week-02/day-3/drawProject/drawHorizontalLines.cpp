// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a 50 long horizontal line from that point.
// Draw at least 3 lines with that function using a loop.

#include "draw.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


void line50pxH(int xStart, int yStart, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 0; i < 11; ++i) {
        line50pxH(0, i * SCREEN_HEIGHT / 10, gRenderer);

    }


}

void line50pxH(int xStart, int yStart, SDL_Renderer *gRenderer)
{
//choose color
    SDL_SetRenderDrawColor(gRenderer,
                           0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);


//draw line
    SDL_RenderDrawLine(gRenderer, xStart, yStart, xStart + 50, yStart);
}
