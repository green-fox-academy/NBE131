//We should know about each sharpie their color (which should be a string), width (which will be a floating point number), inkAmount (another floating point number)
//When creating one, we need to specify the color and the width
//Every sharpie is created with a default 100 as inkAmount
//We can use() the sharpie objects
//which decreases inkAmount

#include <iostream>
#include "sharpie.h"

int main()
{

    sharpie yellow("yellow", 4.5);

    while (yellow.getInkAmount() > 0) {
        std::cout << "How many meters of " << yellow.getWidth() << " mm wide line would you like to draw with your "
                  << yellow.getColor() << " sharpie?:";

        float lineLength;
        std::cin >> lineLength;
        float inkAmountBeforeUse = yellow.getInkAmount();
        yellow.use(lineLength);


        if (lineLength >= inkAmountBeforeUse) {
            std::cout << "The sharpie has become empty after " << inkAmountBeforeUse << " meter(s)." << std::endl;
        } else {
            std::cout << "The sharpie has ink left for " << yellow.getInkAmount() << " meter(s)." << std::endl;
        }
    }


    sharpie cyan("cyan", 3.7);

    while (cyan.getInkAmount() > 0) {
        std::cout << "How many meter(s) of " << cyan.getWidth() << " mm wide line would you like to draw with your "
                  << cyan.getColor() << " sharpie?:";

        float lineLength;
        std::cin >> lineLength;
        float inkAmountBeforeUse = cyan.getInkAmount();
        cyan.use(lineLength);


        if (lineLength >= inkAmountBeforeUse) {
            std::cout << "The sharpie has become empty after " << inkAmountBeforeUse << " meter(s)." << std::endl;
        } else {
            std::cout << "The sharpie has ink left for " << cyan.getInkAmount() << " meter(s)." << std::endl;
        }
    }

    sharpie magenta("magenta", 2.9);

    while (magenta.getInkAmount() > 0) {
        std::cout << "How many meter(s) of " << magenta.getWidth() << " mm wide line would you like to draw with your "
                  << magenta.getColor() << " sharpie?:";

        float lineLength;
        std::cin >> lineLength;
        float inkAmountBeforeUse = magenta.getInkAmount();
        magenta.use(lineLength);


        if (lineLength >= inkAmountBeforeUse) {
            std::cout << "The sharpie has become empty after " << inkAmountBeforeUse << " meter(s)." << std::endl;
        } else {
            std::cout << "The sharpie has ink left for " << magenta.getInkAmount() << " meter(s)." << std::endl;
        }
    }

    return 0;
}