#include<iostream>
#include<string>
#include <ctype.h>

using namespace std;

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        char temp=ch+'a'-'A';
        return temp;
    }else{
        return ch;
    }
}
bool checkPalindrome(char s[], int n)
{
    // Write your code here.
    int st=0;
    int e=n-1;
    while(st<=e){
        if(!isalpha(s[st]) || !isdigit(s[st]))
           {
                st++;
            }
            if(!isalpha(s[e]) || !isdigit(s[e]))
           {
                e--;
            }
        if(toLowerCase(s[st])!=(toLowerCase(s[e]))){
            return 0;
        }
        else{
          st++;
          e--;
        }
    }
    return 1;
}
int main(){
    char name[]="abcba";
    int n=5;
    int a=checkPalindrome(name, n);
    cout<<"The palindrome condition is:"<<a<<endl;
}