#include <iostream>
#include <cmath>

int main()

{
    // this program counts the number of digits in a given number e.g 12345 has 5 digits.
    int number;
    int ctr = 0;
    std::cout << "enter number : \n";
    std::cin >> number;

    while (number != 0)
    {
        
        number = number/10;
        ctr++;

    }
    std::cout << "the digits are : \n" << ctr << std::endl;


    // the following program calculates multiplication table.

    int row;
    std::cout << "enter the amount of row you want to have in your table \n";
    std::cin >> row;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            std::cout << i << " X " << j << " = " << i * j << "\t ";
        }
        std::cout << "\n";
    }
    
}