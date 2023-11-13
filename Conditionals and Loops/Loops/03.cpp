// sum of even numers up to n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number up to which you want to find the sum of even numbers:" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i += 2)
    {
        sum = sum + i;
    }
    cout << "The sum of all the even numbers up to " << n << " is " << sum << endl;
    return 0;
}