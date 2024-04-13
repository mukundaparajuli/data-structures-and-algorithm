#include<iostream>
using namespace std;
int main(){
    int num=5;

    cout<<num<<endl;
    // address of operator
    cout<<"The address of num is "<<&num<<endl;
    cout<<"The size of int is "<< sizeof(num)<<endl;

    double d=10;
    double *ptr= &d;
    cout<<"The value is " << *ptr <<endl;
    cout<<"The address is " << ptr <<endl;


    cout<<"The size of double is " << sizeof(*ptr) <<endl;
    cout<<"The size of address is " << sizeof(ptr) <<endl;


    // pointer to an integer is formed pointing to a garbage address 
    // very bad practise
    // wild pointer
    // int *p;

    // null Pointer
    int i=10;

    int *p=0;
    p=&i;
    cout<<"value of i: "<<*p<<endl;
    cout<<"address of i: "<<p<<endl;
    
    int *q=&i;
    cout<<"value of i: "<<*q<<endl;
    cout<<"address of i: "<<q<<endl;
   

    //value access
    int val=10;
    int *r=&val;
    cout<<"Before: "<<val<<endl;

    // incrementing
    (*r)++;

    cout<<"After: "<<val<<endl;


    // copy pointer
    int *s=q;
    cout<<"add of s="<<s<<endl;
    cout<<"add of q="<<q<<endl;

    cout<<"value pointed by s: "<<*s<<endl;
    cout<<"value pointed by p: "<<*p<<endl;



    // important concepts on pointers
    // pointer arithmetic
    int j=12;
    int *t=&j;
    // values pointed by the pointer variable will increase
    cout<<"(*t)++="<<(*t)++<<endl;
    cout<<"*t="<<(*t)<<endl;
    cout<<"(*t)=(*t)+1="<<(*t)+1<<endl;

    // address pointed by the pointer will increase
    cout<<"address pointed by t or value of t is "<<t<<endl;
    t=t+1;        
    //here the address stored in t will increase by 1 unit of the data type
    // i.e. if the data type of value pointed t is integer then the value of t will increase by the size of integer
    cout<<"address pointed by t or the value of t after adding 1 is "<<t<<endl;

    return 0;
}