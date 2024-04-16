#include<iostream>
using namespace std;
void update(int n){
    n++;
}

// the var n will denote the same memory location
// so it is a pass by reference
// just a different name is provided here for the same memory location
void update2(int& n){      
    n++;
}

// return by reference==>bad practise
//                    ==>you might not be able to access the value
//                    ==>or may be get a garbage value
int& update3(int n){
    int num=n;
    int &ans=num;
    return ans;

}

// 
int* update4(int n){
    int *p=&n;
    return p;
}

int main(){
    int i=5;

    // creating a reference variable
    int &j=i;
    i++;
        cout<<i<<endl;
    j++;
    cout<<j<<endl;

    cout<<endl<<endl<<endl;
    cout<<"Before: "<<i<<endl;
    update(i);
    cout<<"After: "<<i<<endl;

// using reference variable
    cout<<endl<<endl<<endl;
    cout<<"Before: "<<i<<endl;
    update2(i);
    cout<<"After: "<<i<<endl;

// return by refernce==>bad practise
    // cout<<update3(9)<<endl;

// return by refernce for pointer==>also a bad practise 
    // cout<<update(4)<<endl;
}