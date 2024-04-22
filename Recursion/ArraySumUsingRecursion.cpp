#include<iostream>
using namespace std;
int arraySum(int *arr, int size){
    // base case
    if(size==0) return 0;
    if(size<0) return 0;

    // recursive relation
    return arr[0]+arraySum(arr+1, size-1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<arraySum(arr, 9)<<endl;
    return 0;
}