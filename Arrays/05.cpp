// Reverse an array
#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "The array in the reversed form is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {12, 3, 34, -9, 23, 34, 45, 54, 5, 23};
    int n = 10;
    reverseArray(arr, n);
}

/*
0-9
1-8
2-7
3-6
4-5
*/