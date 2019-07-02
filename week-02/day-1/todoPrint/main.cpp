// Add "My todo:" to the beginning of the todoText
// Add " - Download games" to the end of the todoText
// Add " - Diablo" to the end of the todoText but with indentation

// Expected output:

// My todo:
//  - Buy milk
//  - Download games
//      - Diablo

#include <iostream>
#include <string>

int main()
{
    std::string todoText = " - Buy milk\n";
    todoText.insert(0, "My todo: \n");
    todoText.append(" - Download games \n");
    todoText.append("     - Diablo \n");


    std::cout << todoText << std::endl;
    return 0;
}