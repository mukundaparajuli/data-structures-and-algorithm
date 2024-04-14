#include<iostream>
using namespace std;
    void printVal(int *p){
        cout<<*p<<endl;
    }

    // update
    void update(int *p){
        
        *p=*p+1;
        cout<<"inside: "<<p<<endl;
    }

    // sum
    // here arr[] gets the pointer(address of the first element in the array) actually and not an array 
    // void sum(int arr[], int size){
    // can also be written as
        void sum(int *arr, int size){ 
        int total=0;
        for(int i=0; i<size; i++){
            total+=arr[i];
        }
        cout<<total<<endl;
    }
int main(){
    int value=103;
    int *p=&value;

    // printVal(p);
    

    // the actual value of p wont change since the address is sent as an argument a copy of the address is sent
    // but if we update the value pointed by the pointer the value will update
    // cout<<"Before : "<<*p<<endl;
    // update(p);
    // cout<<"After : "<<*p<<endl;



    // function with arrays
    int arr[10]={1,2,3,4,5,6,78,89,9,12};
    sum(arr, 10);
    return 0;
}