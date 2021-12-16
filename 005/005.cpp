// ---------------------------- 100 Days of Code C++ ------------------------------------//
// Day 005                                                                               //
// Write a C++ program to capitalize the first letter of each word of a given string     //
// --------------------------------------------------------------------------------------//

#include <iostream>
#include <sstream>
#include <string>

int main()
{
    
    std::string myString = "hi, i'm a programmer trying to learn c++ in 3 months";
    std::istringstream iss(myString);

    do
    {
        std::string word;
        iss >> word;
        word[0] = std::toupper(word[0]);
        std::cout << word << " ";
    } while (iss);
    
    return 0;
}