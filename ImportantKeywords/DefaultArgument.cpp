#include<iostream>
using namespace std;
printArray(int *arr, int n, int s=0){
    for(int i=s; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    printArray(arr, 14, 5);  //6 7 8 9 10 11 12 13 14
    printArray(arr, 14);    //1 2 3 4 5 6 7 8 9 10 11 12 13 14
    return 0;
}