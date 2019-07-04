#include "draw.h"
#include <vector>
#include "math.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


void drawHexagon(double baseX, double baseY, int sideLength, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int sideLength = 30;

    //for (int c = 0; c < 7; ++c) {


    //  for (int r = 0; r < 4 + (7 % (c+1)); ++r) {
    //    drawHexagon(170 + c * 1.5 * sideLength, 130 - (7 % (c+1)) * sqrt(3)/2*sideLength + r * sqrt(3) * sideLength, sideLength, gRenderer);
    //}
    //}

    for (int c = 0; c < 7; ++c) {

        if (c < 4) {


            for (int r = 0; r < 4 + c; ++r) {
                drawHexagon(170 + c * 1.5 * sideLength, 130 - c * sqrt(3) / 2 * sideLength + r * sqrt(3) * sideLength,
                            sideLength, gRenderer);
            }
        } else if (c >= 4) {
            for (int r2 = 10-c; r2 > 0; --r2) {
                drawHexagon(170 + c * 1.5 * sideLength, 130 + c * sqrt(3) / 2 * sideLength + (abs(r2)-4) * sqrt(3) * sideLength,
                            sideLength, gRenderer);
            }
        }

    }
}

void drawHexagon(double baseX, double baseY, int sideLength, SDL_Renderer *gRenderer)
{

    // calculate relative corner coordinates and store them

    double corners[6][2] = {
            {baseX,                    baseY},
            {baseX + sideLength,       baseY},
            {baseX + 1.5 * sideLength, baseY + (sqrt(3) / 2) * sideLength},
            {baseX + sideLength,       baseY + sqrt(3) * sideLength},
            {baseX,                    baseY + sqrt(3) * sideLength},
            {baseX - 0.5 * sideLength, baseY + (sqrt(3) / 2) * sideLength}

    };
//choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);

//draw lines
    SDL_RenderDrawLine(gRenderer, corners[0][0], corners[0][1], corners[1][0], corners[1][1]);
    SDL_RenderDrawLine(gRenderer, corners[1][0], corners[1][1], corners[2][0], corners[2][1]);
    SDL_RenderDrawLine(gRenderer, corners[2][0], corners[2][1], corners[3][0], corners[3][1]);
    SDL_RenderDrawLine(gRenderer, corners[3][0], corners[3][1], corners[4][0], corners[4][1]);
    SDL_RenderDrawLine(gRenderer, corners[4][0], corners[4][1], corners[5][0], corners[5][1]);
    SDL_RenderDrawLine(gRenderer, corners[5][0], corners[5][1], corners[0][0], corners[0][1]);

}

//room for improvement:
//-parametric size of the upper level, too (4-5-6 etc hexagons superSideLength)
//-automatic centering in the window
//-data structure and iteration of drawhexagon function
//-
