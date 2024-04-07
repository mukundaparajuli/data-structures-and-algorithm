#include<iostream>
using namespace std;

int lengthOfString(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[]="Mukunda";
    cout<<"The length of the string is: "<<lengthOfString(name)<<endl;
    return 0;
}