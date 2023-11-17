// shift operators
// shift operator shifts the bit to the left or right by the no. of bits decided
// left shifting is denoted by <<
// right shifting is denoted by>>

// syntax
// left shifting => (number where the operation is to be done) <</>> (no. of  bits by which each bit is to be shifted)
// works on the basis of zero padding i.e when a bit is shifted the empty space is fulfilled by 0

#include <iostream>
using namespace std;
int main()
{
    cout << (4 << 1) << endl;
    cout << (4 >> 1) << endl;
    return 0;
}

// Point to be noted
// -for small numbers left shifting multiplies the number by two and right shifting divides the number by 2
// -this may not be applicable for the large numbers since a very large positive number when left shifted can
//   give a negative value
// -padding of a negative number is undefined