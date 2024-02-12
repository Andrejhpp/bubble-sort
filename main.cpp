#include <iostream>


void printArray(int* array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << std::endl;
}

void bubbleSort(int* array, int n)
{

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array[j] > array[i]) {
                int t = array[j];
                array[j] = array[i];
                array[i] = t;
            }

        }
    }
}

int main()
{
    int array[] = { 1,3,2,1,2 };
    int a[] = { 3,1,234,36,467,5,2,2,3 };
    int n = sizeof(array) / 4;
    bubbleSort(array, n);
    
    printArray(array, n);
    return (0);
}
