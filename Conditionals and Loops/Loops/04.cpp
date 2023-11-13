// checkk if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check if the number is prime or not " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Given number is a composite number" << endl;
            break;
        }
        else
        {
            cout << "Given number is a prime number" << endl;
            break;
        }
    }
    return 0;
}