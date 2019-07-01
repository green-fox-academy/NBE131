#include <iostream>
#include <string>

// - Create a two dimensional array
//   which can contain the different shades of specified colors
// - In `colors[0]` store the shades of green:
//   `"lime", "forest green", "olive", "pale green", "spring green"`
// - In `colors[1]` store the shades of red:
//   `"orange red", "red", "tomato"`
// - In `colors[2]` store the shades of pink:
//   `"orchid", "violet", "pink", "hot pink"`
int main()
{
    std::string benetton [3][5] = {
            {"lime", "forest green", "olive", "pale green", "spring green"},
            {"orange red", "red", "tomato"},
            {"orchid", "violet", "pink", "hot pink"}
    };

    std::cout << "Hello, World! These are the united colors of Benetton: " << std::endl;
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 5; ++c) {
            std::cout << benetton [r] [c] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}