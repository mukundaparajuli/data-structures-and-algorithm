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