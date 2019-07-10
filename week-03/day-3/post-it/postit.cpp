//
// Created by Dell on 2019. 07. 10..
//

#include "postit.h"
#include <string>
#include <vector>
#include <iostream>


postit::postit(const std::string &text, const std::vector<int> &backgroundColorRGB, const std::vector<int> &textColorRGB) : _text(
        text), _backgroundColorRGB(backgroundColorRGB), _textColorRGB(textColorRGB)
{

}

std::string postit::getText() const
{
    return _text;
}

std::vector<int> postit::getBackgroundColorRGB() const
{
    return _backgroundColorRGB;
}

std::vector<int> postit::getTextColorRGB() const
{
    return _textColorRGB;
}





