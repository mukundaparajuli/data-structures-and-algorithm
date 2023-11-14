/*
 1
 2 1
 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}

/*
 Logic Here:
 -rows -1 -from 1 to n
 -column -j -goes from 1 to i
 -in each column of each row we will apply the rule i-j+1
*/