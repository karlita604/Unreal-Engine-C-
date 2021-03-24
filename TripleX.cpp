#include <iostream>

//we want to be able to make a terminal game 
//prints out the story at the start of the game
//that depends on the difficulty

//PlayGame() function
    //prints out the difficulty
    // prints out the product of the three numbers
    //prints out the sum of the three numbers
    //takes in the three numbers
        // if correct it prints out congrats and then levels up
        //if incorrect it prints out oops try again

//the main function 
    //call PlayGame()
    //
    //clear the buffer./triplex


int main()
{
    std::cout << " \nPlease enter the correct combination...\n ";
    std::cout << std::endl; //ends the line

    std::string hello = "\n";

    int a = 123;
    int b = 18;
    int c = 16;

    int sum = a+b+c;
    int product = a*b*c;

    std::cout << "sum: " << sum << std::endl;
    std::cout << "product: " << product << std::endl;
    std::cout << hello;
    
    return 0;
}