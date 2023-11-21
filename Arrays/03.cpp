// sum of all the elements in an array

#include <iostream>
using namespace std;
int sumOfElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    int arr[900];
    cout << "Enter the size of the array you want to create" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The total sum of all the elements in the array is: " << sumOfElements(arr, n) << endl;
    return 0;
}