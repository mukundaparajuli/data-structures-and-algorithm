#include <iostream>
using namespace std;
int main()
{
    // declaring signed integer

    // declaring positive number as a signed integer
    signed int a = 12; // or you can use simply int for signed integer

    // declaring negative number as a signed integer
    signed int b = -12;

    // declaring unsigned integer

    // declaring positive number as an unsigned integer
    unsigned int c = 24;

    // declaring negative number as an unsigned integer
    unsigned int d = -24;

    int e = c + d + a;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}

/**
 * signed and unsigned integer
 * signed integer:
 *   -signed integer is the default integer
 *   -stores both positive as well as negative numbers
 *   -has a shorter range since it has to reserve 1 bit for the sign
 *
 * unsigned integer:
 *  -unsigned integer needs to be declares
 *  -stores only positive number
 *  -since it does not have to declare any bit for the sign it has a larger range
 *
 *
 * use of unsigned int:
 *  -to have larger range
 *  -to avoid unnecessary negative values
 *  -used when we need to do bitwise operations on the data
 *
 *
 * what happens when we try to store a negative value in a variable decalred as unsigned integer
 * -so when we try to do so the compiler will look at the sign and first of all converts the value into
 *  binary ignoring the sign and performs 2s compliment on the value and stores it but when it is the time
 *  to fetch the value and display it, it will look at the data type and considers the 2s complimented data
 *  as the binary conversion of the positive integers and directly converts the bits into decimal without per
 *  performing any 2s compliments and displays it so when we try to display the data we get a very large value
 *
 *
 * -but when we perform any simplifications like addition or subtraction it will work fine
 *
 *
 */
