// bitwise operators
// AND, OR, NOT and XOR are the bitwise operators
// they are represented by the following signs
// AND=>&
// OR=> |
// NOT=> ~ =>tilda
// XOR=> ^ =>caret

#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    int b = 5;

    cout << "a&b=>  " << (a & b) << endl;
    cout << "a|b=>  " << (a | b) << endl;
    cout << "~a=>   " << (~a) << endl;
    cout << "a^b=>  " << (a ^ b) << endl;
    return 0;
}

// how they work
// first they convert both the numbers into binary digits and operates binary operation on each bits
// AND OPERATION==> a=1001, b=0101 first bit=>1&0=0, second bit 0&1=0, third bit=>0&0=0 and last bit=>1&1=1
// and the result will be 0001 which in decimal is 1
// it works similarly for other operators as well
