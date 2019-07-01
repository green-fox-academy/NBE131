#include <iostream>

// - Create (dynamically) a two dimensional array
//   with the following matrix. Use a loop!
//   by dynamically, we mean here that you can change the size of the matrix
//   by changing an input value or a parameter or this combined
//
//   1 0 0 0
//   0 1 0 0
//   0 0 1 0
//   0 0 0 1
//
// - Print this two dimensional array to the output

int main()
{
    std::cout << "Hello, Neo!" << std::endl;
    std::cout << "Please enter the number of Red pills!" << std::endl;


    int R;
    std::cin >> R;

    char matrix [R] [R];

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < R; ++c) {
            if (c == r) {
                matrix [c] [r] = char(64);
            } else {
                matrix [c] [r] = char(79);
            }
        }
    }

    std::cout << "This is the Matrix: " << std::endl;

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < R; ++c) {
            std::cout << matrix [c] [r];
        }
        std::cout << std::endl;
    }


    return 0;
}