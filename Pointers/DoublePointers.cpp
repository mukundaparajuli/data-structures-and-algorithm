#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1;      //didnot get updated
    // cout<<p<<endl;
    //  *p=*p+1;    //got updated
    // cout<<*p<<endl;
    **p=**p+1;   //got updated   
}
int main(){
    int value=5;
    int *ptr=&value;
    int **pptr=&ptr;

    cout<<"All fine!"<<endl;

    cout<<"ptr="<<ptr<<endl;

    cout<<"Address of ptr"<<&ptr<<endl;
    cout<<"pptr="<<pptr<<endl;

    cout<<"*ptr="<<*ptr<<endl;
    cout<<"*pptr="<<*pptr<<endl;


    // accessing value
    cout<<value<<endl;
    cout<<*ptr<<endl;
    cout<<**pptr<<endl;

    // accessing value at ptr
    cout<<&value<<endl;
    cout<<ptr<<endl;
    cout<<*pptr<<endl;

    // accessing value at pptr
    cout<<pptr<<endl;
    cout<<&ptr<<endl;


    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"Before updating: "<<endl;
    cout<<value<<endl;
    cout<<ptr<<endl;
    cout<<pptr<<endl;

    update(pptr);
    cout<<"After updating: "<<endl;
    cout<<value<<endl;
    cout<<ptr<<endl;
    cout<<pptr<<endl;
    return 0;
}