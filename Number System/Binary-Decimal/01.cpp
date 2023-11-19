// Binary to decimal
/*
The approach that we are gonna follow to convert binary number into decimal is that we are gonna start from the
end bit i.e LSB and multiply it with 2 to the power i where i starts from 0 and goes on till the binary number
becomes 0. (We will right shift the value of n )We will not do this because the binary no. given as input is
taken by computer in the form of decimal no. so we need to divide n by 10
*/

// code
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Entert the binary number:";
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n % 10;
        ans = (bit * pow(2, i)) + ans;
        i++;
        n = n / 10;
    }
    cout << "The answer is " << ans << endl;
    return 0;
}