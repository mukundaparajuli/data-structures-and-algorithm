#include<iostream>
using namespace std;
bool checkPalindrome(string& s, int i, int j){
    while(i<=j){
    if(s[i]!=s[j]) return false;
    if(s[i]==s[j]){
        checkPalindrome(s, ++i, --j);
        return true;
    }
    }
}
int main(){
    string name=" ";
    if(checkPalindrome(name, 0, 6)) cout<<"It is a palindrome!"<<endl;
    else cout<<"It is not a palindrome!"<<endl;;
    return 0;
}