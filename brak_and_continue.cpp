#include <iostream>
#include <string>

int main ()
{
    std::string str = "this is an embeku deasis";
    for (int i = 0; i <str.size(); i++)
    {
        if (str[i] == ' ')
        {
            //std::cout << " --- was here hehehe \n";
            continue;
            //break;
        }
        
        std::cout << str[i] << "\n";
    }
// guessing game using concitional operator!!    
int answer = 10;
int guess;
std::cout << "guess the number \n";
std::cin>> guess;
int point = guess == answer ? 5 : 0;
std::cout << point << std::endl;

}