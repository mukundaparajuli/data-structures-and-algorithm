// Function to find the power of a number

#include <iostream>
using namespace std;
int power(int x, int y)
{
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans = x * ans;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The result will be:" << power(a, b) << endl;
    return 0;
}