/*
swap alternate elements in an array
*/
#include <iostream>
using namespace std;
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapAlternate(int arr[], int n)
{
    int first = 0;
    int second = 1;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
        first += 2;
        second += 2;
    }
    PrintArray(arr, n);
}

int main()
{
    int array[11] = {1, 2, 3, 4, 2, 32, 90, 32, 32, 321233, 42};
    int size = 11;
    swapAlternate(array, size);
}