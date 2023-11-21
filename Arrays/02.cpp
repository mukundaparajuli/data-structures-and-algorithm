#include <iostream>
using namespace std;

void updateArray(int arr[], int size)
{
    cout << "Array inside the function before updation" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[0] = 123;
    cout << "Array inside the function after updation" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    int size = 3;
    cout << "array befor calling the function" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    updateArray(arr, size);
    cout << "array after calling the function" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// when you pass an array to a function it passes the address of the first index of the array
// when you make any changes in the array inside the function
// -the whole array is being changed
// -a function is not passed a copy of the array the whole address of the array is being passed