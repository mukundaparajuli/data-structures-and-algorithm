// sum up to n

// using while loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number up to which you would like the sum to be found" << endl;
//     cin >> n;
//     int i = 0;
//     int sum = 0;
//     while (i <= n)
//     {
//         sum = sum + i;
//         i++;
//     }
//     cout << "The sum up to " << n << " is " << sum << endl;
//     return 0;
// }

// using do while loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number up to which you would like to find the sum" << endl;
//     cin >> n;
//     int i = 0;
//     int sum = 0;
//     do
//     {
//         sum = sum + i;
//         i++;
//     } while (i <= n);
//     cout << "The sum of the numbers up to " << n << " is " << sum << endl;
//     return 0;
// }

// using for loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number up to which you would like to find the sum" << endl;
    cin >> n;
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of the numbers up to " << n << " is " << sum << endl;
    return 0;
}