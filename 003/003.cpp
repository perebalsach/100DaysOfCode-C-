// ---------------------------- 100 Days of Code C++ ---------------------------------- //
// Day 003                                                                              //
// Search a text from a text file and display if it's present inside and how many times //
// ------------------------------------------------------------------------------------ //


#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>

int main()
{
    std::ifstream textFile;
    std::string wordToFind;
    bool wordFound = false;
    int numWordsFound = 0;

    std::cout << "Word to find in the text file: " << std::endl;
    std::cin >> wordToFind;

    textFile.open("sampleText.txt");
    if (!textFile)
    {
        std::cerr << "\nUnable to load the text file";
        return -1;
    }

    std::string word = "";
    while (textFile >> word)
    {
        if(word == wordToFind)
        {
            numWordsFound++;
        }
    }

    std::cout << "\n=============================================================================" << std::endl;
    std::cout << "Result:: " << wordToFind << " found " << numWordsFound << " times in the file" << std::endl;
    textFile.close();

    return 0;
}