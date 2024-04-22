#include<iostream>
using namespace std;
bool isFound(int *arr, int size, int key){
    // base Case
    if (arr[0]==key) return true;
    if (size==0) return false;
    // recursive relation
    return isFound(arr+1, size-1, key);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    if(isFound(arr, 10, 110)) cout<<"Key is present in the array"<<endl;
    else cout<<"Key is not present in the array"<<endl;
    return 0;
}