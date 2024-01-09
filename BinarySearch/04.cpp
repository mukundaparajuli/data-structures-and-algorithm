#include <iostream>
using namespace std;

// int sumToLeft(int arr[], int start, int end)
// {
//     int sum = 0;
//     for (int i = start; i <= end; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int pivotIndex(int arr[], int n)
// {
//     int size = n;
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;
//     while (start <= end)
//     {
//         int leftSum = sumToLeft(arr, start, mid - 1);
//         int rightSum = sumToLeft(arr, mid + 1, end);
//         if (leftSum == rightSum)
//         {
//             return mid;
//         }
//         else if (leftSum < rightSum)
//         {
//             mid++;
//         }
//         else if (rightSum < leftSum)
//         {
//             mid--;
//         }
//     }
//     return -1;
// }

// more optimised one
int pivotIndex(int arr[], int n)
{
    int leftSum = 0;
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (leftSum == totalSum - leftSum - arr[j])
        {
            return j;
        }
        else
        {
            leftSum += arr[j];
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {1, 2, 4, 5, 4, 3};
    int theIndex = pivotIndex(arr, 6);
    cout << "The reqd index is " << theIndex << endl;
    return 0;
}