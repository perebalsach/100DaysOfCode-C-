// ---------------------------- 100 Days of Code C++ ---------------------------------- //
// Day 001                                                                              //
// Read a text file and display the contents on screen exactly as the text file         //
// ------------------------------------------------------------------------------------ //

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filePath;
    std::fstream myTextFile;
    std::string string;

    std::cout << "Enter the path of the Text file to read: ";
    std::cin >> filePath;

    myTextFile.open(filePath);
    if (!myTextFile)
    {
        std::cerr << "Unable to load the file";
        return -1;
    }

    std::cout << "\n ======= Start of the file ======= \n";
    
    if (myTextFile.is_open())
    {
        while (!myTextFile.eof())
        {
            getline(myTextFile, string);
            std::cout << string << std::endl;
        }
        myTextFile.close();
    }

    std::cout << "\n ======= End of the file ======= \n";
    return -1;

}