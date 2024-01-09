#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[8] = {2, 3, 424, 34, 543, 345, 35, 365};
    reverseArray(arr, 8);
}