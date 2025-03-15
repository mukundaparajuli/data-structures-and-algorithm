//  i will be provided an array of string in the form of infix operation
//  to perform this i will have to perform the following algorithm
// 1. Create a stack to store the operators
// 2. Create an array of characters or string ans to store the ans
// 3. I will traverse through the string and check for the following conditions
// 4. If the character is an operand then i will add it to the ans
// 5. If the character is an operator then i will check the precedence of the operator
// 6. If the precedence of the operator is greater than the top of the stack then i will push the operator to the stack
// 7. If the precedence of the operator is less than the top of the stack then i will pop the operator from the stack and add it to the ans
// 8. If the precedence of the operator is equal to the top of the stack then i will pop the operator from the stack and add it to the ans
// 9. If the character is an opening bracket then i will push it to the stack
// 10. If the character is a closing bracket then i will pop the operator from the stack and add it to the ans until i get the opening bracket
// 11. I will return the ans


#include<bits/stdc++.h>

using namespace std;

string convertInfixToPostfix(string operation){

}

int main(){
    string operation = "a+b*(c^d-e)";
    cout<<convertInfixToPostfix(operation);
}