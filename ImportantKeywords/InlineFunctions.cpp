#include<iostream>
using namespace std;
inline int getMax(int a, int b){
    return (a>b)? a: b;
}
int main(){
    int a=2, b=3;
    int ans=0; 
    ans=getMax(a, b);
    cout<<ans<<endl;
    a+=4;
    b+=2;
    ans=getMax(a, b);
    cout<<ans<<endl;
}

// =>no extra memory usuage
// =>no function call overhead

// conditions for a function to be made inline
// -1 line==> can be made incline
// -2/3 line==> may or may not be made incline
// -greater than 3 lines==> cant be made inline