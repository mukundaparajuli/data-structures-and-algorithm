// linear seaerch
#include <iostream>
using namespace std;
bool isKeyPresent(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 123, 2423, 545, 5476, -564, 0, 2342, 8, 4};
    int key;
    cout << "Enter the number you want to check in the array" << endl;
    cin >> key;
    if (isKeyPresent(arr, 10, key))
    {
        cout << "The number you were searching for is present in the array." << endl;
    }
    else
    {
        cout << "The number you were searching for is not present in the array." << endl;
    }
}