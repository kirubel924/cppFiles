#include <iostream>
#include <vector>

void vect_elem(std::vector<int> &myvector)
{
    myvector.push_back(4);
    for (int i = 0; i < myvector.size(); i++)
    {
        std::cout << myvector[i] << " \t "; //<< std::endl;
    }
   std::cout << "\n";
}

int main()
{
    std::vector<int> myvector = {1,2,3};
    
    vect_elem(myvector);
    vect_elem(myvector);
    vect_elem(myvector);
    vect_elem(myvector);
    vect_elem(myvector);
    //myvector.pop_back();
    //std::cout << myvector.data() << "";
}