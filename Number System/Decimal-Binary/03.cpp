// Negative integer to binary
/*
First of all we will have to understand how the negative integer is stored in the computer
-So when we try to store a negative number in the computer it first converts it into
2 complimented form-convert to 1s complement and add 1 to it and stores it
-and when it has to display the value it checks the MSB value and if it is 1 it considers it to
 be negative and does 2s compliment and returns it


 -So to convert the negative integer into binary we will have to ignore the negative sign and convert it into
  binary then apply 2s compliment to it
*/

// code
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long int ans = 0, i = 0;
    if (n < 0)
    {
        long long int n = pow(2, 8) + n;
        // cout<<n;
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            i++;
            n = n >> 1;
            cout << ans << endl;
        }
    }
    cout << "The binary representation of the given negative number is :" << ans;
    return 0;
}