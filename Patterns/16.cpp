// D
// C D
// B C D
// A B C D

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
        char ch = 'A' + n - i;
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// Logic
// -row goes from 1 to n
// -column goes from 1 to the no. of row it is in
// -we will declare a variable ch with the value 'A'+n-i
// -in each change in column we will increase the value by 1

// approach
// -here the pattern is in the starting character of each column
// -and the character in the each column goes on decreasing with the increase in column no
// -so we will need to find the character which depends on the value of n we give and the no. of row
//  it is in then we can decrease the value of the character by 1 for each column
// -for that we will need to use the formula 'A'+n-i