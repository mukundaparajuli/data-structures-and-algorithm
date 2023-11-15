// A
// B C
// C D E
// D E F G

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
            cout << ch;
            ch++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}

// Logic
// -row will start from 1 and goes till n
// -column will start from 1 goes till row
// -in each column of each row we will print the value of ch which we will initially give as 'A'+i-1
// -the value of ch will increase from one column to other in the same row

// Approach
// -here the value changes with change in column
// -but the starting value of each column depend on the no of row it is in
// -so we will try to present the starting value on the basis of the row no it is in
// -and we will get the formula ch='A'+i-1 and value of ch will increase with increase in column in each row