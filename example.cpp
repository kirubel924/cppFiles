#include <stdexcept>
#include <iostream>
#include <vector>

int findMaxSum(const std::vector<int>& numbers)
{
     int max, max_from_list = 0, 
       start =0, end = 0, s=0; 
       //int largest, n;

       std::vector<int> v { 5, 9, 7, 11 };  
       //if(largest < v())   
  
    for (int i=0; i< sizeof(i-1); i++ ) 
    { 
        max_from_list += v[i]; 
  
        if (max < max_from_list) 
        { 
            max = max_from_list; 
            start = s; 
            end = i; 
        } 
  
        if (max_from_list < 0) 
        { 
            max_from_list = 0; 
            s = i + 1; 
        } 
    } 
    std::cout << "the sum of the highest numbers is "
        << max << std::endl;  
    //throw std::logic_error("Waiting to be implemented");
    return 0;
};

//#ifndef RunTests
int main()
{
    std::vector<int> v { 5, 9, 7, 11 };
    std::cout << findMaxSum(v);
}
//#endif