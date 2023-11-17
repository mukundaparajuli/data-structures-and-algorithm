// A B C
// B C D
// C D E

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENter the value of n:";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + i - 1;
        int j = 1;
        while (j <= n)
        {
            cout << ch<<" ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}


// Logic here
// row(i) goes from 1 to n
// column(j) of each row goes from 1 to n
// for each column we will print the value of ch('A'+i-1) which value will increase as the column increase 
// the value of  ch will also increase with increase in row no.