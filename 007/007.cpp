// ---------------------------- 100 Days of Code C++ ---------------------------------- //
// Day 007                                                                              //
// Write a C++ program to check if a given string is a Palindrome or not            //
//                                                                                      //
// ------------------------------------------------------------------------------------ //

#include <iostream>
#include <string>

bool checkIfPalindrome(std::string word);


int main() {

    std::string word;

    std::cout << "Enter a word to check if is a Palindrome or not: " << std::endl;
    std::cin >> word;

    if(checkIfPalindrome(word))
    {
        std::cout << "***************************" << std::endl;
        std::cout << word << " IS a Palindrome !!!" << std::endl;
        std::cout << "***************************" << std::endl;
    }
    else
    {
        std::cout << word << " is NOT a Palindrome :(" << std::endl;
    }

    return 0;
}

bool checkIfPalindrome(std::string word)
{
    bool isPalindrome;
    int wordLength;
    wordLength = word.length();

    for (int i = 0; i < wordLength; ++i)
    {
        if(word[i] == word[wordLength-i-1])
        {
            isPalindrome = true;
        }
        else
        {
            break;
        }
    }

    return isPalindrome;
}
