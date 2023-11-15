//     1
//    22
//   333
//  4444
// 55555

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
        int j = n - i;
        while (j)
        {
            cout << " ";
            j--;
        }
        int k = i;
        while (k)
        {
            cout << i;
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}