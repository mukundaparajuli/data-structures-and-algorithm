/*converting decimal number to binary
while converting decimal number to binary we have mainly two approaches
--Approach1
    -This approach is the same as we used to do in our school
    -you just have to divide the decimal number by 2 and get the remainder
    -we will divide the decimal no. till the number becomes 0
    -at the same time we will collect each remainders
    -then we will arrange all the remainders from bottom to the top and get the result

    For eg: 7 is a decimal number then:
    division            remainder
    n=7
    7/2--n=3            1
    3/2--n=1            1
    1/1--n=0            1
    and the binary representation will be 111
*/

// code
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number you want to convert to binary" << endl;
    cin >> n;
    int i = 0;
    int bit;
    int ans = 0;
    while (n != 0)
    {
        bit = n % 2;
        ans = (bit * pow(10, i)) + ans;
        n = n / 2;
        i++;
    }
    cout << "The binary representation for the following decimal no is " << ans << endl;
    return 0;
}