#include <iostream>
#include <algorithm>

void swap_elements(int *j, int *k)
{
    int a = *j;
    *j = *k;
    *k = a;
}

void array_wave(int array[], int size)
{
    std::sort(array, array + 2);
    for (int i = 0; i < size-1; i+=2)
    
    swap_elements(&array[i], &array[i+1]);
}
int main()
    {
        int array[] = {11,3,5,12,45,21,4};
        int size, num;
        size = sizeof(array)/sizeof(array[0]);
        //std::cout << size;
        for (int i = 0; i < size; i++)
        {
            // std::cout << array[i] << std::endl;
             array_wave(array, size);
        }
        for (int i = 0; i < size; i++)
        {
            std::cout << array[i] << std::endl;
        }
        

    }
