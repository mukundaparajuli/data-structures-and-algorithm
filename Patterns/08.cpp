/*
 1
 2 3
 3 4 5
 4 5 6 7
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}

/*
 Logic here:
 -row i.e i goes from 1 to n
 -column goes from 1 to the (no of the row it is in) i.e. j
 -for each row print the 'value'(no. of the row it is in) and go on increasing for increase in each column
*/
