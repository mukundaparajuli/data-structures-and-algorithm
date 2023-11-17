// checkk if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check if the number is prime or not " << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "not a Prime";
    }

    return 0;
}