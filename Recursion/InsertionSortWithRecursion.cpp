#include<iostream>
using namespace std;
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSortWithRecursion(int *arr, int size, int i=1){
    if(i==size) return;
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        temp=arr[j+1];
    insertionSortWithRecursion(arr, size, i+1);
}
int main(){
    int arr[]={1,2,23,12,34,343,231,123,324,23432,32};
    cout<<"Before Sorting: "<<endl;
    printArray(arr, 11);
    insertionSortWithRecursion(arr, 11);
    cout<<"After Sorting: "<<endl;
    printArray(arr, 11);
    return 0;
}