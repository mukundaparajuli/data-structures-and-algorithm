// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // space
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // no
        int count = i;
        int no = n + 1 - i;
        while (no)
        {
            cout << count;
            count++;
            no--;
        }
        cout << endl;
        i++;
    }
    return 0;
}