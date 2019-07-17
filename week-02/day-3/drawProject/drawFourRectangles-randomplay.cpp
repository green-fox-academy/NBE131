// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.

#include "draw.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
#include <random>



const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer *gRenderer)
{


    //srand(time(nullptr));
    //for (int i = 0; i < 4; ++i) {



//randomize size
    std::random_device rd;
    std::mt19937 mt(rd());

    std::uniform_real_distribution<double> dist(1.0, 150.0);
    int rectangleWidth =  dist(mt);


    std::random_device rd2;
    std::mt19937 mt2(rd2());

    std::uniform_real_distribution<double> dist2(1.0, 100.0);
    int rectangleHeight = dist2(mt2);


//randomize position
    std::random_device rd3;
    std::mt19937 mt3(rd3());
    std::uniform_real_distribution<double> dist3(1.0, (SCREEN_WIDTH * 0.75));
    int cornerX = dist3(mt3);


    std::random_device rd4;
    std::mt19937 mt4(rd4());
    std::uniform_real_distribution<double> dist4(1.0, (SCREEN_HEIGHT * 0.75));
    int cornerY = dist4(mt4);


    //randomize color
    std::random_device rd5;
    std::mt19937 mt5(rd5());

    std::uniform_real_distribution<double> dist5(1.0, 254.0);
    int colorR = dist5(mt5);
    int colorG = dist5(mt5);
    int colorB = dist5(mt5);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, colorR, colorG, colorB, 0xFF);
    //create a rectangle
    SDL_Rect fillRect = {cornerX, cornerY, rectangleWidth, rectangleHeight};

//draw rectangle
    SDL_RenderFillRect(gRenderer, &fillRect);
}
//}


