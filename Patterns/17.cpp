// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Wnter the value of n:";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n + 1 - i;
        while (j)
        {
            cout << "* ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}