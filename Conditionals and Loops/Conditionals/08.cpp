// assignment
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is a lower case letter";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is a Upper case letter";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is a digit" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}