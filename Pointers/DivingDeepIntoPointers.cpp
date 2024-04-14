#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,13,5};
    //name of the array represents the address of the first element in the array
    cout<<"The address of first element in the array is: "<<arr<<endl;   
    // using &operator
    cout<<"The address of first element in the array using & operator is: "<<&arr[0]<<endl;
    // value of first element in the array
    cout<<"The value of first element in the array is: "<<arr[0]<<endl; 
    // value of first element in the array using *operator
    cout<<"The value of first element in the array is: "<<*arr<<endl;
    cout<<"The value of first element in the array is: "<<*arr+1<<endl;
    cout<<"The value of the element at the index 2 in the array is: "<<*(arr+2)<<endl;
    cout<<"The value of first element in the array is: "<<*arr+3<<endl;


    // arr[i] and i[arr] represent the same thing both are absoulutely valid and wont give any error
    int i=3;
    cout<<"The value at index i is: "<<i[arr]<<endl;


    // Array and pointers
    int temp[10];
    cout<<"The size of array temp is: "<<sizeof(temp)<<endl;
    int *ptr=&temp[0];
    cout<<"The size of pointer variable is: "<<sizeof(ptr)<<endl;
    cout<<"The size of value pointed by the pointer variable is: "<<sizeof(*ptr)<<endl;
    cout<<"The size of the address of the pointer variable is: "<<sizeof(&ptr)<<endl;
    cout<<&temp<<endl;
    cout<<ptr<<endl;
    cout<<&temp[0]<<endl;
    cout<<temp<<endl;

    // here ptr is a pointer variable which stores the address of the first element in the array
    // since ptr is also a variable it will also have a certain address in the memory
    // we can print the address of the pointer variable by
    cout<<"Address of the pointer variable:"<< &ptr<<endl;



    int arr2[10];
    // we cannot do it like this
    // this will give an error
    // arr2=arr2+1;
    // cout<<arr<<endl;

    // but using pointer we can do it
    // here though ptr2 and arr2 represent the same thing i.e. address of the first element in the array
    // we can increment using ptr but not using arr2
    int *ptr2=&arr[0];
    ptr2 = ptr2+1;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    return 0;
}