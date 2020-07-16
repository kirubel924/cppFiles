#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file ("hello.txt");
    std::string input;
    std::vector<std::string> names;
    while (file >> input)
    {
        names.push_back(input);
    }

    //
    
    for (std::string name : names)
    {
        //std::cout << name << std::endl;

    }
    std::string temp;
    getline(file, input);
    getline(file, temp);

    //file.get();
    //std::vector <std::string> temp;
    //std::string temp = file.get();
    std::cout << input << std::endl;
    std::cout << temp << std::endl;
    
    
    
    return 0;
}