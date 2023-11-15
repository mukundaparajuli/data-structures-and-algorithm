// A
// B B
// C C C

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
        char ch = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// Logic here
// -row goes from 1 to n
// -column of the each row goes from 1 to no. of the row it is in
// -in each column of a row we will print 'ch' whose value we have initially given to be 'A'+i-1
// -the value of ch will change with the change in the row no. 