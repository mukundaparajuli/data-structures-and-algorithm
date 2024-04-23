#include<iostream>
#include<cstring>
using namespace std;
void reverseString(string& str, int s, int e){
    if(s>=e) return;
    swap(str[s], str[e]);
    reverseString(str, ++s, --e);
   
}
int main(){
    string name="Mukunda";
    reverseString(name, 0, 6);
    cout<<"The reversed string is: "<<name<<endl;
    return 0;
}