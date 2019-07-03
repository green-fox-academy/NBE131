// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.

#include "draw.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


void lineToCenter(int xStart, int yStart, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 0; i < 11; ++i) {
        lineToCenter(0 + i * (SCREEN_WIDTH / 10), SCREEN_HEIGHT, gRenderer);

    }


}

void lineToCenter(int xStart, int yStart, SDL_Renderer *gRenderer)
{
//choose color
    SDL_SetRenderDrawColor(gRenderer,
                           0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);


//draw line
    SDL_RenderDrawLine(gRenderer, xStart, yStart, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);

}
