//We are going to play with maps. Feel free to use the built-in methods where possible.
//Create an empty map where the keys are integers and the values are characters
//        Print out whether the map is empty or not
//Add the following key-value pairs to the map
//        Key	Value
//97	a
//98	b
//99	c
//65	A
//66	B
//67	C
//        Print all the keys
//        Print all the values
//        Add value D with the key 68
//Print how many key-value pairs are in the map
//Print the value that is associated with key 99
//Remove the key-value pair where with key 97
//Print whether there is an associated value with key 100 or not
//Remove all the key-value pairs

#include <iostream>
#include <map>

int main()
{
    std::map<int, char> exerciseTable;


    if (exerciseTable.empty() == 1) {
        std::cout << "The map is empty." << std::endl;
    } else {
        std::cout << "The map is not empty." << std::endl;
    }


    for (int i = 97; i <= 99; ++i) {
        exerciseTable[i] = char(i);
    }
    for (int j = 65; j <= 67; ++j) {
        exerciseTable[j] = char(j);
    }

    std::cout << " Map keys:" << std::endl;
    std::map<int, char>::iterator it;

    for (it = exerciseTable.begin(); it != exerciseTable.end(); it++) {
        std::cout << it->first << std::endl;
    }


    std::cout << " Map values:" << std::endl;
    std::map<int, char>::iterator it2;

    for (it2 = exerciseTable.begin(); it2 != exerciseTable.end(); it2++) {
        std::cout << it2->second << std::endl;
    }

    exerciseTable[68] = char(68);

    std::cout << "Number of pairs in the map: " << exerciseTable.size() << std::endl;

    std::cout << "Value with key 99: " << exerciseTable[99] << std::endl;

    const int it3 = 97;
    exerciseTable.erase(it3);

    if (exerciseTable.count(100) != 0) {


        std::cout << "There's a value associated with key '100'. " << std::endl;

    } else {
        std::cout << "There's no value associated with key '100'. " << std::endl;
    }

    exerciseTable.clear();

    std::cout << " Map keys:" << std::endl;
    std::map<int, char>::iterator it4;

    for (it4 = exerciseTable.begin(); it4 != exerciseTable.end(); it4++) {
        std::cout << it4->first << std::endl;
    }


    std::cout << " Map values:" << std::endl;
    std::map<int, char>::iterator it5;

    for (it5 = exerciseTable.begin(); it5 != exerciseTable.end(); it5++) {
        std::cout << it5->second << std::endl;
    }

    return 0;
}
