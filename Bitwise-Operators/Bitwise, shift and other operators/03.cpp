// increment and decrement operators
// increment and decrement operators are the unary operators which increase or decrease the integer value by 1
// they can each be divided into two parts
// -post increment and pre increment
//   -post increment==>use the value and then increase the value
//   -pre increment ==>increase the value then use the value
// -post decrement and pre decrement
//   -post decrement ==>use the value then decrease the value by 1
//   -predecrement ==>decrease the value then use the value

#include <iostream>
using namespace std;
int main()
{
    int i = 4;
    // post increment i=4, ans=4, i=5
    cout << i++ << endl;
    // pre increment i=5, ans=6, i=6
    cout << ++i << endl;
    // post decrement i=6, ans=6, i=5
    cout << i-- << endl;
    // pre decrement i=5, ans=4, i=4
    cout << --i << endl;
    return 0;
}