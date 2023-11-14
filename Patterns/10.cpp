/*
 A A A
 B B B
 C C C
*/
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
        while (j <= n)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }
    return 0;
}

/*
 Logic :
 -row -i - goes from 1 to n
 -column -j- goes from 1 to n
 -for each row we will print the value of ch in each column
 -for each change in row number we will increase the value of ch by 1
*/