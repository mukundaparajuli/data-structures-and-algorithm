#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int sizeOfInt = sizeof(a);
    cout << "the value is " << a << " the size is(int) " << sizeOfInt << " bytes" << endl;

    float b = 12.32;
    int sizeOfFloat = sizeof(b);
    cout << "the value is " << b << " the size is(float) " << sizeOfFloat << " bytes" << endl;

    double c = 12;
    int sizeOfDouble = sizeof(c);
    cout << "the value is " << c << " the size is(double) " << sizeOfDouble << " bytes" << endl;

    signed d = 12;
    int sizeOfSignedInt = sizeof(d);
    cout << "the value is " << d << " the size is(signed) " << sizeOfSignedInt << " bytes" << endl;

    signed f = 12;
    int sizeOfUnSignedInt = sizeof(f);
    cout << "the value is " << f << " the size is(unsigned) " << sizeOfUnSignedInt << " bytes" << endl;

    char e = 'a';
    int sizeOfChar = sizeof(e);
    cout << "the value is " << e << " the size is(char) " << sizeOfChar << " bytes" << endl;
    return 0;
}