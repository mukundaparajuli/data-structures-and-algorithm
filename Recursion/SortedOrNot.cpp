#include<iostream>
using namespace std;
bool isSorted(int *arr, int size){
    // base case
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;

    // recursive function
    return isSorted(arr+1, size-1);
}
int main(){
    int arr[]={1,2,3,5,6,7};
    if(isSorted(arr, 6))
    cout<<"Sorted"<<endl;
    else cout<<"Unsorted"<<endl;
    return 0;
}