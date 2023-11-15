// * * * * *
//   * * * *
//     * * *
//       * *
//         *

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
        int j = 1;
        while (j < i)
        {
            cout << "  ";
            j++;
        }

        // for the star
        int k = n + 1 - i;
        while (k)
        {
            cout << "* ";
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// -row goes from 1 to n
// -we will have to divide the pattern to two parts
//   -spaces
//   -stars
// -spaces-the column will go from 0 to n-1 for that we will use the formula j(column)=i-1;
//         -the value of j goes on increasing with the increase in column and space will be printed til
//          the value of j is less than the value of i
// -stars -the collumn will go from n to 1 for that we will use the formul k(column)=n+1-i;
//        -the value of k goes on decreasing with the increase in column and the star will
//         be printed till the value of k exists