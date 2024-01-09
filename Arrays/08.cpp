// swap alternate by a different method
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void alternateSwap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    int arr[8] = {1, 3, 4, 53, 23, 34, 21, 42};
    int size = 8;
    alternateSwap(arr, size);
    printArray(arr, size);
}