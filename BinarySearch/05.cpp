// square root using binary Search
#include <iostream>
using namespace std;
int squareRoot(int num)
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
int main()
{
    int input;
    cout << "Enter the input number you want to find the square root of: " << endl;
    cin >> input;
    cout << "The square rooot of the given number is: " << squareRoot(input) << endl;
    return 0;
}