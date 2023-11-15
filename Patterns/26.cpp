//     *
//    ***
//   ****
//  ******
// ********

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
        // space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // first part
        int fStar = i;
        while (fStar)
        {
            cout << "*";
            fStar--;
        }

        // second part
        int sStar = i - 1;
        while (sStar)
        {
            cout << "*";
            sStar--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
