#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include <fstream>



void game_play(std::vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << std::endl;
    }
    
}

void play_game()
{
    std::vector<int> guesses;
    int count = 0;
    int random = rand() % 16;
    std::cout << random; 
    while (true)
    {
        int ur_guess;
        std::cin >> ur_guess;
        guesses.push_back(ur_guess);
        count++;
        //guesses[count++] = ur_guess;
        if (ur_guess == random)
        {
            std::cout <<"you got it!!"<<std::endl;
            break;
        }else if (ur_guess < random)
        {
            std::cout << "Pls try a higher number \n";
        }else
        {
            std::cout << "Pls try a lower number \n";
        }
        
        //to sotore the highest score,
        std::ifstream input("high_scored_list.txt");
        int high_score;
        input >> high_score;
        std::ofstream output("high_scored_list.txt");
        if (count < high_score)
        {
            output << count;
        }else
        {
            output << high_score;
        }        
        
        game_play(guesses);
    }
    
}
int main ()
{
   srand(time(NULL));
    int any_guess;
    do
    {           
    
    std::cout << "press 0 to quit or 1 to continue \t";
    std::cin >> any_guess;

    switch (any_guess)
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
    } while (any_guess != 0);
}