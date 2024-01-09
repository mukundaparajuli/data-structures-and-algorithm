// Function to find the power of a number

#include <iostream>
using namespace std;
int power(int x, int y)
{
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans = x * ans;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The result will be:" << power(a, b) << endl;
    return 0;
}


// Things to consider about functions
/*
-parameter is a value or a variable used during the declaration/defination of a function
-argument is a value or a variable passed to the function while calling them
-the name of the variable in argument and parameter don't need to be the same
*/