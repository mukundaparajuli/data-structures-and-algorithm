
//     *
//    **
//   ***
//  ****
// *****
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    // for each row
    int i = 1;
    while (i <= n)
    {
        // for the space
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }

        // for the star
        int k = 1;
        while (k <= i)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}