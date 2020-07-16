#include <iostream>
#include <string>
#include <cmath>

int main()
{
    // greatest common factor of two numbers.
    int gcf;
    //int ctr;
    int num1, num2;
    std::cout << "enter two numbers \n"; 
    std::cin >> num1; 
    std::cout << "and \n";
    std::cin >> num2;
    for (int i = 2; i <= num1 && i<= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcf = i;
        }
        
    }
   std::cout << "the gcd of the two numbers is : " << gcf << std::endl; 
   return 0;
}