#include <iostream>
using namespace std;
int main()
{
    int a = -1;
    cout << "the value of a is " << a << endl;
    return 0;
}

// so how does the memory stores the negative value?
// whenever we give any negative value to any variable it is stored in following steps
// -since all the data are stored in the form of binary digits first of all it is converted into bits
// -then the bits are 2's complemented and are stored
// -whenever we try to access that data the compiler finds the value of MSB
// -if the value in MSB is 0 it will consider it to be a positive number and just converts it into decima
// -if the value in MSB is 1 it will consider it to be a negative number and it performs 2's complement on
//   the bits and then converts the data in the form of decimal and displays it to the user