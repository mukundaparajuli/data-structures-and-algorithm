#include<iostream>
using namespace std;
void reverseString(char arr[], int n){
    int s=0; 
    int e=n-1;
    while(s<=e){
        char temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
int countLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!=0; i++){
        count++;
    }
    return count;
}
int main(){
    char name[]="Mukunda";
    int n=countLength(name);
    reverseString(name, n);
    cout<<"The reversed string for Mukunda is: "<<name;
    return 0;
}