// finding the total no of 1 in two numbers' binary representation
// for eg if two numbers are 2 and 3 then total no of 1 bit should be 3 i.e 10&11 has 3 bits in total

#include <iostream>
using namespace std;
int oneBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The total no of bit '1' in the given numbers is: " << oneBit(a) + oneBit(b) << endl;
    return 0;
}