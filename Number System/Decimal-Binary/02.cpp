/*
#Approach no.2:
    -The second approach we can follow is that the decimal no. we provide as an input to the compiler is
     stored in the form of binary itself
    -So all we need to do is to represent that as the output

    So how are we gonna do that:
     -For that we will do & operation to the decimal number by 1
     -By doing this we will get to know what the last bit is
     -and then we will arrange the bit as we did earlier
     -and we will get the binary representation of the decimal number

    Example:
    -Let us consider that the number is 7
    -we know that it is stored in the computer in the form of 111 binary representation
     and all we need to do is to get that as the output
    -when we do & by 1 to that we will get the last bit then we will shift the number to the right
    - n=111===>111&1==>001 which is the last bit then we will shift it right then
    -n=011===>011&1==>001 which is the other bit again we will right shift the n by 1 bit
    -n=001===>001&1==>001 which is the other bit and when we do right shift again we get n as 0
    -and the process ends and we will arrange the bits that we get in a manner from end to start
     and we will get the binary representation of the number
*/

// code
#include <iostream>
#include <cmath>
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
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "The binary representation for the following decimal no is " << ans << endl;
    return 0;
}