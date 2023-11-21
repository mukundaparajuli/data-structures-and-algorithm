// Function to find the fibonacci series
// fibonacci series is like 0 1 1 2 3 5 8 13...
#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;
    // cout << fib1 << " " << fib2 << " ";
    for (int i = 3; i <= n; i++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    cout << fib3 << " ";
}

int main()
{
    int n;
    cout << "Enter the number up to which you would like to find the fibonacci series: " << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}