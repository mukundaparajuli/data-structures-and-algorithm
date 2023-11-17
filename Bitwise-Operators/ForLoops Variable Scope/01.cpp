// for loop
// syntax
// for(initialization; condition; updation){
//      code
// }
// eg:
// for(int i=0; i<5; i++){
// cout<<i<<endl;
// }

// prime number using for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want to check if it is odd:" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        cout << "The entered number is a prime number" << endl;
    }
    else
    {
        cout << "The entered number is not a prime number" << endl;
    }
    return 0;
}