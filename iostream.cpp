#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
    std::ofstream file ("hello.txt", std::ios::app);
    
    std::vector<std::string> names;
    names.push_back("kiru, chiku, anni and ");
    names.push_back("chiku, chiku, me ");
    names.push_back("kiru, chiku, kiru and ");

    if (file.is_open())
    {
        std::cout << "found the file \n";
    }
    

    for (std::string name : names)
    {
        file << name << std::endl;
    }
    

    file <<"here is what u gonna do....!!!";
    //std::cout << 'hello.txt' << std::endl;
    
    return 0;

}

