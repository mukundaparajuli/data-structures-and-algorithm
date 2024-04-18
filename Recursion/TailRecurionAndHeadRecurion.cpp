#include<iostream>
using namespace std;
int print(int n){
    if(n==0) return 0;

// Processing
    cout<<n<<endl;

// Recursive Relation 
    print(n-1);
}
int main(){
    int n;
    cout<<"Enter a number n: "<<endl; cin>>n;
    cout<<endl<<endl;
    print(n);
    // cout<<print(n)<<endl;
}