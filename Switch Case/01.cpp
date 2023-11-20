// code
#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Number 1";
        break;

    case 2:
        cout << "Number 2";
        break;
    case '1':
        cout << "character 1";
        break;

    case '2':
        cout << "character 2";
        break;
    default:
        cout << "This is a default case";
    }
    return 0;
}

/*
Things to consider while writing code with switch case statements
-you cannot use any data type other than integer and character for the value in case
    -you cannot use strings or float or any other data type
-in switch you can write a variable or an expression whose results should be checked with each case
-we use break keyword to end the switch block/module
    -if we dont use break keyword, when a case matches with the variable in the switch or the result of
     the expression in the switch everythin below it is executed without checking the case until it
     encounters a break keyword anywhere
-you cannnot use continue keyword inside switch case you can only use it in loops
-default case is not a compulsion and doesnot get any error your code but it is a good convention to use it
*/