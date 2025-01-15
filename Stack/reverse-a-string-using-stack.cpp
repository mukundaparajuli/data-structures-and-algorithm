#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main(){
    string str;
    cout<<"enter the string you would like to reverse: "<<endl;
    cin>>str;

    stack<char> st;
    for(char ch : str){
        st.push(ch);
    }

    string newStr;
    while(!st.empty()){
        newStr.push_back(st.top());
        st.pop();
    }

    cout<<"the string in reversed form is :"<<newStr<<endl;
    return 0;
}