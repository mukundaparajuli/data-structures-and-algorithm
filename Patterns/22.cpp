// 1 1 1 1 1
//   2 2 2 2
//     3 3 3
//       4 4
//         5

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
        int space = i - 1;
        // space
        while (space)
        {
            cout << "  ";
            space--;
        }

        // number
        int j = n + 1 - i;
        while (j)
        {
            cout << i << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// Logic here
// -row will go from 1 to the value of n
// - the pattern needs to be divided into two parts
//      -space
//      -number
//      space will go from 0 to n-1-for that we use the formula space =i-1 and the space will be reduced by one for each increase in column no
//      number will go from n to 1 for that we use the formula j=n+1-i; here j is the column no and j will decrease with increase in column no
