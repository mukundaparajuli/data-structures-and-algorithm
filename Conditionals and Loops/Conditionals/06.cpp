// tricky question 2
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = a + 1;
    if ((a == 4) == b)
    {
        cout << a << endl;
    }
    else
    {
        cout << a + 1 << endl;
    }
    return 0;
}