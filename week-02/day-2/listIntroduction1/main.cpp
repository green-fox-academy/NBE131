#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> namesList = {};
    std::cout << "Number of elements in the namelist: " << namesList.size() << std::endl;

    std::string w = "William";
    namesList.push_back(w);

    std::cout << "Number of elements in the namelist [added William]: " << namesList.size() << std::endl;

    if (namesList.empty() == 1) {
        std::cout << "The names list is empty." << std::endl;
    } else {
        std::cout << "The names list is not empty." << std::endl;
    }

    std::string j = "John";
    namesList.push_back(j);

    std::string a = "Amanda";
    namesList.push_back(a);

    std::cout << "Number of elements in the namelist [added John & Amanda]: " << namesList.size() << std::endl;

    std::cout << "Third element in the namelist: " << namesList[2] << std::endl;

    std::cout << "Elements in the namelist: " << std::endl;
    for (int i = 0; i < namesList.size(); ++i) {
        std::cout << namesList.at(i) << std::endl;
    }

    std::cout << "Elements in the namelist numbered: " << std::endl;
    for (int i = 0; i < namesList.size(); ++i) {
        std::cout << i + 1 << ".: " << namesList.at(i) << std::endl;
    }


    namesList.erase(namesList.begin() + 1);


    std::cout << "Elements in the namelist reversed [erased John]: " << std::endl;
    for (int i = 0; i < namesList.size(); ++i) {
        std::cout << namesList.at(namesList.size() - (i + 1)) << std::endl;
    }


    namesList.clear();

    std::cout << "Elements in the namelist [cleared]: " << std::endl;
    for (int i = 0; i < namesList.size(); ++i) {
        std::cout << namesList.at(i) << std::endl;
    }


    return 0;
}