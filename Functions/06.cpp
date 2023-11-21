// finding AP nth term=3*n+7
#include <iostream>
using namespace std;

int AP(int n)
{
    return 3 * n + 7;
}

int main()
{
    int n;
    cout << "Enter a number of term you would like to find the value of :" << endl;
    cin >> n;
    int ans = AP(n);
    cout << "The answer is :" << ans << endl;
    return 0;
}