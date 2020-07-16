#include<iostream>
#include<string>

int main()
{

    // password guessing program.
    std::string password = "hateraw";
    std::string guess_password;

    do
    {
        std::cout << "guess the password \n";
        std::cin >> guess_password;
    } while (guess_password != password);
   
   std::cout << "the passoword is correct!! \n";

/*
program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum. Go to the editor
//Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/
   int i, j;
   std::cout << "enter two numbers to add \n";
   std::cin >> i;
   std::cout << " and \n";
   std::cin >> j;
   if (i == j)
   {
       std::cout << " the result numbers is : " << 3 *( i + j ) << std::endl;
   }else
   {
       std::cout << " the sum of the numbers is : " << i + j << std::endl;
   }
   
   /*
   program to check two given integers, and return true if one of them is 30 or if their sum is 30. Go to the editor
Sample Input:
30, 0
25, 5
20, 30
20, 25
Sample Output:
1
1
1
0
*/
   if (i + j == 30) 
   {
       std::cout <<" 1 \n";
   } 
   else if ((i == 30 || j == 30))
   {
       //std::cout << i + j << std::endl; 
       std::cout << " 1 \n";
   } else 
   {
       std::cout << "0 \n";
   }
   
   
   
   
   
}