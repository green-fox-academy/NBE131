#include "draw.h"
#include <vector>
#include "math.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <random>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


void drawEquilateralTriangle(double baseX, double baseY, int sideLength, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(gRenderer);

//number of rows to draw and span
    //std::random_device rd;
    //std::mt19937 mt(rd());

    //std::uniform_real_distribution<double> dist(1.0, 20.0);
    //int superSideLength =  dist(mt);

    srand(time(0));
    int superSideLength = rand() % 20;

    int sideLength = (SCREEN_HEIGHT - 40) / ((superSideLength) * (sqrt(3) / 2));



//rowcounter cycle
    for (int r = 0; r < superSideLength; ++r) {

//columncounter cycle
        for (int c = 0; c < r + 1; ++c) {

            drawEquilateralTriangle(((SCREEN_WIDTH / 2) - ((sideLength / 2) * (r + 1))) + (sideLength * c),
                                    20 + (r + 1) * (sqrt(3) / 2) * sideLength,
                                    sideLength, gRenderer);
        }

    }
}

void drawEquilateralTriangle(double baseX, double baseY, int sideLength, SDL_Renderer *gRenderer)
{

    // calculate relative corner coordinates and store them

    double corners[3][2] = {
            {baseX,                    baseY},
            {baseX + sideLength,       baseY},
            {baseX + 0.5 * sideLength, baseY - (sqrt(3) / 2) * sideLength},

    };

//randomize color
    int colorR = rand() % 254;
    int colorG = rand() % 254;
    int colorB = rand() % 254;

//choose color
    SDL_SetRenderDrawColor(gRenderer, colorR, colorG, colorB, 0xFF);

//draw lines
    SDL_RenderDrawLine(gRenderer, corners[0][0], corners[0][1], corners[1][0], corners[1][1]);
    SDL_RenderDrawLine(gRenderer, corners[1][0], corners[1][1], corners[2][0], corners[2][1]);
    SDL_RenderDrawLine(gRenderer, corners[2][0], corners[2][1], corners[0][0], corners[0][1]);

}

//room for improvement:
//-data structure and iteration of drawTriangle function
//- get some better randomness of the superSideLength cycle


