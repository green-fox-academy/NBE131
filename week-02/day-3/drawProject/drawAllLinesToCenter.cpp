// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Fill the canvas with lines from the edges, every 20 px, to the center.

#include "draw.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


void lineToCenter(int xStart, int yStart, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 0; i < SCREEN_WIDTH; i += 20) {
        lineToCenter(i, 0, gRenderer);
    }
    for (int j = 0; j < SCREEN_HEIGHT; j += 20) {
        lineToCenter(0, j, gRenderer);
    }
    for (int k = 0; k <= SCREEN_WIDTH; k += 20) {
        lineToCenter(k, SCREEN_HEIGHT, gRenderer);
    }
    for (int l = 0; l <= SCREEN_HEIGHT; l += 20) {
        lineToCenter(SCREEN_WIDTH, l, gRenderer);
    }


}

void lineToCenter(int xStart, int yStart, SDL_Renderer *gRenderer)
{
//choose color
    SDL_SetRenderDrawColor(gRenderer,
                           0x00 /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);


//draw line
    SDL_RenderDrawLine(gRenderer, xStart, yStart, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);

}