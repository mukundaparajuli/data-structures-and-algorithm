#include <iostream>
using namespace std;
int main()
{
    int ch = 'a';
    cout << ch << endl;
    return 0;
}

/*
How are the characters stored in the memory
-so to understand how the characters are stored in the memory we will have to know the ASCII table
-ASCII table is the table which consist of the decimal value for the characters
-Each characters are assigned an unique decimal value and when we store them the deciamal value is
 converted into the binary digits form and is stored in the memory
-When we have to access the value the reverse process takes place and the character is displayed
-A question might arrise here how will the compiler know if the stored bits are the bits of a decimal number
 or a character then the data type that we provide while declaring the variable comes into picture and provides
 information to the compiler if the data is integer or character


 Accessing the ASCII value of a character
 -If we want to find the ASCII value of a character we can declare the type of the data to be integer
 -In this way we can find the ASCII value of a character
 -And this process is known as typeCasting
*/