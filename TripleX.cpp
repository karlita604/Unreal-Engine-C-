#include <iostream>
#include <istream>

int level = 1;

int main()
{
    std::cout << " \n+ Let there be three unknown integers: x, y and z. \n ";
    std::cout << std::endl; //ends the line

    std::string space = "\n";

    int FirstValue = 123;
    int SecondValue = 18;
    int ThirdValue = 16;

    int sum = FirstValue+SecondValue+ThirdValue;
    int product = FirstValue*SecondValue*ThirdValue;

    std::cout << "x + y + z = " << sum << std::endl;
    std::cout << "x * y * z = " << product << std::endl;
    std::cout << space;

    std::cout << "+ To advance to the next level you must enter the correct values of x, y and z. " << std::endl ;       
    std::cout << "+ Understood?" << std::endl ;  
    std::cout << "+ Please enter the integers, each separated by a whitespace." << std::endl ;            
    std::cout << space;

    int FirstInput, SecondInput, ThirdInput;
    std::cin >> FirstInput >> SecondInput >> ThirdInput;
    std::cout << space;
    std::cout << "+ You entered: \n\n" << "x: " << FirstInput << " y: "<< SecondInput << " z: "<< ThirdInput << space << std::endl;

    int PlayerSum = FirstInput+SecondInput+ThirdInput;
    int PlayerProduct = FirstInput*SecondInput*ThirdInput;

    if(PlayerProduct == product && PlayerSum == sum){

        std::cout << "Your input was CORRECT!";







    }
    else{

        std::cout << "INCORRECT";

    }
    return 0;
}