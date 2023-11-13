// finding if a number is positive or negative
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a integer:" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "The value of integer is a positive number." << endl;
    }
    else if (a < 0)
    {
        cout << "The value of integer is a negative number." << endl;
    }
    else
    {
        cout << "The value of integer is 0" << endl;
    }
    return 0;
}