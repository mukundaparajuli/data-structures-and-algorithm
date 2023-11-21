// Maximum and minimum number in an array

#include <iostream>
#include <limits.h>
using namespace std;

int maxNum(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int minNum(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}

int main()
{
    int size;
    cout << "Enter the size of the array you want to create: " << endl;
    cin >> size;

    int arr[2000];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The maximum value in the array is :" << maxNum(arr, size) << endl;
    cout << "The minimum value in the array is :" << minNum(arr, size);
    return 0;
}