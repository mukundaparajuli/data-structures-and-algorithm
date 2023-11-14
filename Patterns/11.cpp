/*
 A B C D
 E F G H
 I J K L
 M N O P
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
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*
 Logic here:
 -for each row -i- moves from 1 to n
 -for each column -j - moves from 1 to n
 -for each column we will print the value of ch
 -for each change in the column we will increase the value of ch by 1
*/