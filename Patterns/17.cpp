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

// Logic here:
// i - row goes from 1 to n
// j - column goes from n  and will deacrease with the increase in row no. ultimately to 1
// for each column we will print the * n+1-i times and it will go on decreasing with the increase in column no
