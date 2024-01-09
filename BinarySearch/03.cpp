// Find peak in the mountain array
#include <iostream>
using namespace std;
int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (arr[mid - 1]<arr[mid]> arr[mid + 1])
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[mid];
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    cout << "The peak element the arr is " << peakElement(arr, 7) << endl;
}