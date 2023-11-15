// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// Logic here:
// -row goes from 1 to n
// -column goes from 1 to the no. of row it is in
// -in each column we will print the character ch
// -with the change in the no of column the value of ch will increase by 1