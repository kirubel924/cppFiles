#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>

// number guessing game of random numbers. Creates menu to quite or continue the game....

void play_game()
{
    int random = rand() % 16;
    //std::cout << random <<" game continues .... \n";
    std::cout << " guess a number .... \n";
    while (true)
    {
        int guess, result1, result2, num;
        std::cin >> guess;
        if(guess == random)
        {
            std::cout << " well done!! \n"; 
            break;
        }
        
        /*
        num = (guess > random) ? result1 : result2; 
        std::cout << num <<" guess above that number! \n";
        std::cout << result2 <<" guess below that number! \n";
        */
        else if (guess < random) {
            std::cout << "guess above that number! \n";
        }else if (guess > random)
        {
            std::cout << " guess below that number! \n";
        }
        
    }
    std::cout <<" the correct number was "<< random <<" game continues .... \n";
}

int main()
{
    srand(time(NULL));
    int press;
    do
    {           
    
    std::cout << "press 0 to quit or 1 to continue \t";
    std::cin >> press;

    switch (press)
    {
    case 0: 
         std::cout << "you r quitting \n";

        return 0;
    case 1:
        play_game();
        // std::cout << " game continuies... \n";
        break;    
    
    default:
        break;
    }
    } while (press != 0);

}











/*int biggest_element(int array[], int size)
{
   
   
}


int main()
{
    int array[] = {1,2,3,9,5,6,7};
    int highest_element;
    int size = sizeof(array)/sizeof(array[7]);
    std::cout << size << std::endl;
    
    for (int i = 1; i < size; i++)
    {
        if (array[0] < array[i ])
        
            array[0] = array[i];
            
        highest_element = array[0];
        //catch array[0];
        //std::cout<< *biggest_element(array, size) << std::endl;
        std::cout << highest_element<< "\t";
    }
    
}*/