#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age >= 50)
    {
        cout << "You are old" << endl;
    }
    else if (age <= 20)
    {
        cout << "You are young" << endl;
    }
    else
    {
        cout << "You are an adult" << endl;
    }
    return 0;
}