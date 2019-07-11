#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <string>


class sharpie
{
public:
    sharpie(const std::string &color, float width);

    void use (float& lineLength);

    const std::string &getColor() const;
    float getWidth() const;
    float getInkAmount() const;

private:
    float _inkAmount;
    float _width;
    std::string _color;

};


#endif //SHARPIE_SHARPIE_H
