#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string filename;
    std::string fileContents;
    std::ofstream myFile;

    std::cout << "--------------------------------------¬\n";
    std::cout << "| Enter Ctrl-X to finish entering text |\n";
    std::cout << "| and save the file                    |\n";
    std::cout << "|======================================|\n";
    
    std::cout << "\nEnter the name of the file: ";
    std::cin >> filename;

    std::cout << "Enter text to the file: \n";
    std::cin >> fileContents;

    // Get text until we press Ctrl-X
    while()
    {
        // if we press Enter will write to a new line
    }

    myFile.open(filename.c_str());
    myFile << fileContents;

    myFile.close();

    return 0;
}