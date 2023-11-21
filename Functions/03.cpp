// Function to calculate the combination (nCr)
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 0)
        return 1;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}
int nCr(int n, int r)
{
    int deno = factorial(n);
    int num = factorial(n - r) * factorial(r);
    return deno / num;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int result = nCr(n, r);
    cout << "The result is " << result;
    return 0;
}

/**
 * CallStack:
 * When you call a function make sure that it has already been declared before
 * You cannot access the function declared below it
 * for eg here in this program the function factorial needs to be defined already before it is used in nCr
 * function
 * */