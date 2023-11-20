// You have a certain amount(to be taken from user).find how many notes of 1000, 500,100, 50, 20, 10, 5,1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an amount: ";
    cin >> n;
    switch (n >= 1000)
    {
    case 1:
        cout << "The number of thousand rupee notes is:" << n / 1000 << endl;
        n = n % 1000;
        break;
    }
    switch (n >= 500)
    {
    case 1:
        cout << "The number of five hundred rupee notes is:" << n / 500 << endl;
        n = n % 500;
        break;
    }
    switch (n >= 100)
    {
    case 1:
        cout << "The number of  hundred rupee notes is:" << n / 100 << endl;
        n = n % 100;
        break;
    }
    switch (n >= 50)
    {
    case 1:
        cout << "The number of  fifty rupee notes is:" << n / 50 << endl;
        n = n % 50;
        break;
    }
    switch (n >= 20)
    {
    case 1:
        cout << "The number of twenty rupee notes is:" << n / 20 << endl;
        n = n % 20;
        break;
    }
    switch (n >= 10)
    {
    case 1:
        cout << "The number of ten rupee notes is:" << n / 10 << endl;
        n = n % 10;
        break;
    }
    switch (n >= 5)
    {
    case 1:
        cout << "The number of ten rupee notes is:" << n / 5 << endl;
        n = n % 5;
        break;
    }
    switch (n >= 1)
    {
    case 1:
        cout << "The number of one rupee notes is:" << n / 1 << endl;
        n = n % 1;
        break;
    }
}