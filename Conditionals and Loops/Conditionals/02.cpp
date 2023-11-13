// comparison betn two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a < b)
    {
        cout << "b is greater than a" << endl;
    }
    else
    {
        cout << "Both of the numbers are equal" << endl;
    }
    return 0;
}

/*
Things to Consider while using cin:
-cin does not take the blank spaces, tabs and enter as a value
-if you want to provide such things as value you will have to use cin.get()
-cin.get() is not only used to take whitespaces, tabs and enter as a value but also takes single character as
 a value
*/