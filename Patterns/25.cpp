//   1
//  23
// 456

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        // space
        int space = n - i;
        while (space)
        {
            cout << "   ";
            space--;
        }

        // no
        int no = i;
        while (no)
        {
            cout << count<<"  ";
            count++;
            no--;
        }
        cout << endl;
        i++;
    }
    return 0;
}