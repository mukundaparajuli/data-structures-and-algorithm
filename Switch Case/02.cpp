// simple calculator using switch statements
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    cout << "What operation would you like to do between them?" << endl;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "The result of the operation will be " << a + b << "." << endl;
        break;
    case '-':
        cout << "The result of the operation will be " << a - b << "." << endl;
        break;
    case '*':
        cout << "The result of the operation will be " << a * b << "." << endl;
        break;
    case '/':
        cout << "The result of the operation will be " << a / b << "." << endl;
        break;
    case '%':
        cout << "The result of the operation will be " << a % b << "." << endl;
        break;
    default:
        cout << "Invalid Operation" << endl;

        return 0;
    }
}