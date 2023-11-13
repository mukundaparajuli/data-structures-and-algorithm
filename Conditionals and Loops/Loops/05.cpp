// Farheneit to Celcius
#include <iostream>
using namespace std;
int main()
{
    int f;
    cout << "Enter the temperature in Farheneit:" << endl;
    cin >> f;
    int c = (f - 32) * 10 / 18;
    cout << "The value in Celcius is:" << c << "C" << endl;
    return 0;
}