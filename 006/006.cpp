// ---------------------------- 100 Days of Code C++ ---------------------------------- //
// Day 006                                                                              //
// Write a C++ program to convert a given non-negative integer to English words         //
// Ex: 0 -> Zero - 29 -> Twenty Nine - 99 ->                                            //
// Ref: https://www.w3resource.com/cpp-exercises/string/cpp-string-exercise-15.php      //
//                                                                                      //
// ------------------------------------------------------------------------------------ //

#include <iostream>
#include <string>

std::string convertNumberToLetters(int number);
int firstDigit(int n);
int lastDigit(int n);

int main()
{
    std::string belowHundred[] = {};
    int numberInput;
    std::string numberInputLetters;

    std::cout << "Enter a number between 0 and 99: " << std::endl;
    std::cin >> numberInput;

    numberInputLetters = convertNumberToLetters(numberInput);

    std::cout << numberInput << " = " << numberInputLetters << std::endl;
    return 0;
}

std::string convertNumberToLetters(int number)
{
    std::string belowTwenty[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six",
                                 "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
                                 "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
                                 "Eighteen", "Nineteen"};

    std::string belowTwenty2[] = {"", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    int firstNum;
    int secondNum;
    std::string firstLetter;
    std::string secondLetter;

    if (number < 19)
    {
        return belowTwenty[number];
    }
    else if(number > 19 && number < 99)
    {
        firstNum = firstDigit(number);
        firstLetter = belowTwenty2[firstNum - 1];
        secondNum = lastDigit(number);
        secondLetter = belowTwenty[secondNum];
        return firstLetter + " " + secondLetter;
    }
}

int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

int lastDigit(int n)
{
    return (n % 10);
}