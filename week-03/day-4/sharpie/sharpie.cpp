#include "sharpie.h"

sharpie::sharpie(const std::string &color, float width) : _color(color), _width(width)
{
    _inkAmount =100;
}

void sharpie::use(float& lineLength){

    _inkAmount = _inkAmount - lineLength;
}

float sharpie::getInkAmount() const
{
    return _inkAmount;
}

const std::string &sharpie::getColor() const
{
    return _color;
}

float sharpie::getWidth() const
{
    return _width;
}
