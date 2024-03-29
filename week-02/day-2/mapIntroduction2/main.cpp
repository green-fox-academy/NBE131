/*Create a map where the keys are strings and the values are strings with the following initial values

        Key	Value
978-1-60309-452-8	A Letter to Jo
978-1-60309-459-7	Lupus
978-1-60309-444-3	Red Panda and Moon Bear
978-1-60309-461-0	The Lab
Print all the key-value pairs in the following format

A Letter to Jo (ISBN: 978-1-60309-452-8)
Lupus (ISBN: 978-1-60309-459-7)
Red Panda and Moon Bear (ISBN: 978-1-60309-444-3)
The Lab (ISBN: 978-1-60309-461-0)
Remove the key-value pair with key 978-1-60309-444-3

Remove the key-value pair with value The Lab

Add the following key-value pairs to the map

        Key	Value
978-1-60309-450-4	They Called Us Enemy
978-1-60309-453-5	Why Did We Trust Him?
Print whether there is an associated value with key 478-0-61159-424-8 or not

Print the value associated with key 978-1-60309-453-5*/

#include <iostream>
#include <map>
#include <string>


int main()
{

    std::map<std::string, std::string> publishingData;

    publishingData.emplace("978-1-60309-452-8", "A Letter to Jo");
    publishingData.emplace("978-1-60309-459-7", "Lupus");
    publishingData.emplace("978-1-60309-444-3", "Red Panda and Moon Bear");
    publishingData.emplace("978-1-60309-461-0", "The Lab");

    std::map<std::string, std::string>::iterator it;

    for (it = publishingData.begin(); it != publishingData.end(); it++) {
        std::cout << it->second << " (ISBN: " << it->first << ")" << std::endl;

    }


    publishingData.erase("978-1-60309-444-3");


    std::map<std::string, std::string>::iterator it2;

    for (it2 = publishingData.begin(); it2 != publishingData.end(); it2++) {
        std::cout << it2->second << " (ISBN: " << it2->first << ")" << std::endl;

    }


    publishingData.emplace("978-1-60309-450-4", "They Called Us Enemy");
    publishingData.emplace("978-1-60309-453-5", "Why Did We Trust Him");


    if (publishingData.count("478-0-61159-424-8") != 0) {
        std::cout << "There's a value with key 478-0-61159-424-8. " << std::endl;
    }else {
        std::cout << "There's no value with key 478-0-61159-424-8. " << std::endl;
    }


    std:: cout << "Title with key 978-1-60309-453-5: " << publishingData.at("978-1-60309-453-5") << std::endl;

    return 0;
}