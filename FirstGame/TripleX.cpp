#include <iostream>
#include <istream>
#include <stdlib.h>

std::string space = "\n";
int level = 1;
int maxlevel;
int maxplays=0;

void play()
{
    std::cout << "\n\n+ LEVEL: " << level << std::endl;

    //Generating values

    //i don't take the seed into consideration
    int FirstValue = rand() % 10;
    int SecondValue = rand() % 10;
    int ThirdValue = rand() % 10;
    int sum = FirstValue + SecondValue + ThirdValue;
    int product = FirstValue * SecondValue * ThirdValue;

    //Printing values
    std::cout << "x + y + z = " << sum << std::endl;
    std::cout << "x * y * z = " << product << std::endl;
    std::cout << space;

    //User Input
    int FirstInput, SecondInput, ThirdInput;
    std::cout << "+ Please enter your answer, each value separated by a whitespace.\n";
    std::cin >> FirstInput >> SecondInput >> ThirdInput;
    std::cout << space;
    std::cout << "+ YOU ENTERED: "
              << "x: " << FirstInput << " y: " << SecondInput << " z: " << ThirdInput << space << std::endl;

    int PlayerSum = FirstInput + SecondInput + ThirdInput;
    int PlayerProduct = FirstInput * SecondInput * ThirdInput;

    //Checks if the input is correct
    if (PlayerProduct == product && PlayerSum == sum)
    {
        std::cout << " CORRECT!\n";
        level++;
        maxplays++;

    }
    else
    {
        std::cout << "INCORRECT!\n";
        maxplays++;
        std::cout << "+ The answer was: " << FirstValue << " " << SecondValue << " " << ThirdValue << std::endl;
    }
}

void intro()
{
    std::cout << space;
    std::cout << " ---------------  WELCOME TO MY GAME! ---------------    \n";
    std::cout << " + Let there be three unknown integers: x, y and z.\n";
    std::cout << " + Each value will be between 0 and 100\n";
    std::cout << " + I will give you the sum and the product of these values.\n";
    std::cout << " + To advance to the next level you must enter the correct values of x, y and z. \n";
    std::cout << space;
    std::cout << " + How many levels do you want? \n";
    std::cin >> maxlevel;
}

int main()
{
    intro();

    //you can only fail 2*maxlevel times
    while (level < maxlevel && maxplays < 2*maxlevel)
    {
        play();
    }
    std::cout << "****THANKS FOR PLAYING! BYEBYE!****";
    return 0;
}