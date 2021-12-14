// ---------------------------- 100 Days of Code C++ ---------------------------------- //
// Day 004                                                                              //
// Replace in a text file all the matching strings entered by the user                  //
// ------------------------------------------------------------------------------------ //

// TODO: get the end of line write too 

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>

int main()
{
    std::ifstream textFile;
    std::ofstream newTextFile("replaceTextFile.txt");
    std::string wordToFind;
    std::string wordToReplace;
    bool wordFound = false;
    int numWordsFound = 0;

    std::cout << "Word to find in the text file: " << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cin >> wordToFind;

    std::cout << "\nWord to replace: " << std::endl;
    std::cout << "----------------" << std::endl;
    std::cin >> wordToReplace;

    textFile.open("sampleText.txt");
    if (!textFile)
    {
        std::cerr << "\nUnable to load the text file";
        return -1;
    }

    std::string word = "";
    while (textFile >> word)
    {
        

        if (word == wordToFind)
        {
            word = wordToReplace;
            numWordsFound++;
        }
        word += " ";
        newTextFile << word;
    }
    
    newTextFile.close();
    textFile.close();

    if (remove("sampleText.txt") != 0)
    {
        std::cerr << "\nCan't remove the file" << std::endl;
    }

    rename("replaceTextFile.txt", "sampleText.txt");
    

    std::cout << "\n=============================================================================" << std::endl;
    std::cout << "Result:: " << wordToFind << " found " << numWordsFound << " times in the file and replaced with -> " << wordToReplace << std::endl;
    
    return 0;
}