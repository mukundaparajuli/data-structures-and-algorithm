#include<iostream>
#include<cstring>
using namespace std;

char maximumOccuringChar(string s){
    int arr[26]={0};
    int number=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a'&&s[i]<='z'){
            number=s[i]-'a';
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            number=s[i]-'A';
        }else{
            continue;
        }
        arr[number]++;
    }
    int maxm=0;
    int maxmIndex=0; 
    for(int i=0; i<26;i++){
        if(arr[i]>maxm){
            maxm=arr[i];
            maxmIndex=i;
        }
    }
    char ans='a'+maxmIndex;
    return ans;
}

int main(){
    string text="eeeee";
    cout<<"The maximum occuring character is: "<<maximumOccuringChar(text)<<endl;
    return 0;
}