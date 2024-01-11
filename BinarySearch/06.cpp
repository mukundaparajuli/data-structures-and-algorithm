// square root of an integer with float value as well using binary Search
#include <iostream>
using namespace std;
int intRoot(int num)
{
    int n = num;
    long long int ans;
    int start = 0;
    int end = num;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else if (mid * mid < n)
        {
            start = mid + 1;
            ans = mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a number you want to find square root of: " << endl;
    cin >> n;
    int tempSol = intRoot(n);
    double ans = morePrecision(n, 3, tempSol);
    cout << "The square root for the given value is: " << ans << endl;
    return 0;
}