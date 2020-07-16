#include <iostream>

/*
passing array to function using sizeof operator...
*/
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
     std::cout << array[i] << " \t ";   
    }
    
     std::cout << std::endl;
}

int main ()
{
    int my_array[] = {1,2,3,4,5,6,7};
    int size = sizeof(my_array)/sizeof(my_array[7]);
    print_array(my_array, 7);
    
}