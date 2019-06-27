#include <iostream>

int main() {
   int from;
   int to;

    std::cout << "Hello, this is a counter program "
                 "(in this case, this unfortunately excludes ordering beer)." << std::endl;

   do {
       std::cout << "Please give the integer to count from:";
       std::cin >> from;
       std::cout << "Please give the integer to count to:";
       std::cin >> to;

       if (from >= to) {
           std::cout << "The second number should be bigger." << std::endl;
       }
   }
     while (from >= to);

    for (int i = from; i < to + 1; ++i) {
        std::cout << i << std::endl;

    }

    return 0;
}