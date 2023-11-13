// print numbers from 1 to n

// using while loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number up to which you would like to print the number:" << endl;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

// using do while loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ENter the number up to which you would like to print the numbers:" << endl;
//     cin >> n;
//     int i = 1;
//     do
//     {
//         cout << i << endl;
//         i++;
//     } while (i <= n);
//     return 0;
// }

// using for loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number up to which you would like the number to be printed" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}