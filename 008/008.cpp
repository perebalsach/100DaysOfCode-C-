// ---------------------------- 100 Days of Code C++ ---------------------------------- //
// Day 008                                                                              //
// Using a vector string, find the duplicated words and display them on screen          //
//                                                                                      //
// ------------------------------------------------------------------------------------ //

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
    std::string();
    std::vector <std::string> sentence { "This",  "is", "a","sentence", "check",  "lots" , "of", "words",  "and",  "is",  "words", "to",  "check", "if", "the", "program", "works" };
    std::vector<std::string> duplicates;

    std::sort(sentence.begin(), sentence.end());
    for (int i = 1; i < sentence.size(); ++i) {
        if(sentence[i - 1] == sentence[i]) {
            if(duplicates.empty()) {
                duplicates.push_back(sentence[i]);
            } else if (sentence[i] != duplicates.back()) {
                duplicates.push_back(sentence[i]);
            }
        }
    }

    std::cout << "\nResult: ================================================== " << std::endl;
    for (int i = 0; i < duplicates.size(); ++i) {
        std::cout << " --> " << duplicates[i] << " <-- has duplicates" << std::endl;
    }
    std::cout << "========================================================== " << std::endl;

    return 0;
}
