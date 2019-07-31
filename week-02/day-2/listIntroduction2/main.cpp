#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


/*Create a list ('List A') which contains the following values
        Apple, Avocado, Blueberries, Durian, Lychee

         Create a new list ('List B') with the values of List A

        Print out whether List A contains Durian or not

         Remove Durian from List B

        Add Kiwifruit to List A after the 4th element
        Compare the size of List A and List B
        Get the index of Avocado from List A
        Get the index of Durian from List B

        Add Passion Fruit and Pomelo to List B in a single statement

        Print out the 3rd element from List A*/



int main()
{
    std::vector<std::string> listA;
    listA.push_back("Apple");
    listA.push_back("Avocado");
    listA.push_back("Blueberries");
    listA.push_back("Durian");
    listA.push_back("Lychee");

    std::vector<std::string> listB = listA;


    std::vector<std::string>::iterator it;

    it = std::find(listA.begin(), listA.end(), "Durian");
    if (it != listA.end())
        std::cout << "Durian was found in List A" << '\n';
    else
        std::cout << "Durian was not found in list A \n";


    std::vector<std::string>::iterator it2;

    it2 = std::find(listB.begin(), listB.end(), "Durian");

    if (it2 != listB.end())
        std::cout << "Durian was found in List B" << '\n';
    else
        std::cout << "Durian was not found in list B \n";


    listB.erase(it2);


    std::vector<std::string>::iterator it3;

    it3 = std::find(listB.begin(), listB.end(), "Durian");

    if (it3 != listB.end())
        std::cout << "Durian was found in List B." << std::endl;
    else
        std::cout << "Durian was not found in list B." << std::endl;


    listA.emplace(listA.begin() + 4, "Kiwifruit");


    if (listA.size() > listB.size()) {
        std::cout << "List A is longer." << std::endl;
    } else if (listA.size() < listB.size()) {
        std::cout << "List A is longer." << std::endl;
    } else {
        std::cout << "The two lists are of equal length." << std::endl;
    }


    std::vector<std::string>::iterator it4;

    it4 = std::find(listA.begin(), listA.end(), "Avocado");

    std::cout << "Index of avocado in list A: " << std::distance(listA.begin(), it4) << std::endl;


    std::vector<std::string>::iterator it5;

    it5 = std::find(listB.begin(), listB.end(), "Durian");

    std::cout << "Index of durian in list B: " << std::distance(listB.begin(), it5) << std::endl;


    listB.insert (listB.end(), {"Passion fruit","Pomelo"});


    std::vector<std::string>::iterator it6;

    it6 = listA.begin() + 2;

    std::cout << "3rd element in list A: " << *it6 << std::endl;

    return 0;
}