// Function to find if a number is odd or even

#include <iostream>
using namespace std;
void isEven(int n)
{
    if (n & 1)
        cout << "This is an odd number.";
    else
        cout << "This is an even number.";
}

int main()
{
    int n;
    cout << "Enter the number to check if it is odd or even:" << endl;
    cin >> n;
    isEven(n);
    return 0;
}
