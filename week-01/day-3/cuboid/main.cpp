#include <iostream>

int main() {
    double lenght = 76;
    double width = 34;
    double height = 54;
    double volume= lenght*width*height;
    double surfaceArea = 2*(lenght*width+height*width+height*lenght);

    std::cout << "Hello, World!" << std::endl << std::endl;

    std::cout << "Lenght of cuboid is " << lenght << std::endl;
    std::cout << "Width of cuboid is " << width << std::endl;
    std::cout << "Height of cuboid is " << height << std::endl;
    std::cout << "Volume of cuboid is " << volume << std::endl;
    std::cout << "Surface area of cuboid is " << surfaceArea << std::endl;





    return 0;
}