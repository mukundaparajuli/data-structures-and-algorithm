#include<iostream>
using namespace std;
int fact(int n){
    // if(n==0) return 1;
    
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a number you want to find the factorial of: "<<endl; cin>>n;
    cout<<"The factorial is: "<<fact(n)<<endl;
    return 0;
}