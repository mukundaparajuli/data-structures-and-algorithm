#include<iostream>
#include<limits.h>
using namespace std;
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int *arr, int size, int j){
    if(j==size-1) return;
    int minIndex=j;
    for(int i=j; i<size; i++){
        if(arr[i]<arr[minIndex]){
            swap(arr[minIndex], arr[i]);
        }
    }

    selectionSort(arr, size, j+1);
}
int main(){
    int arr[]={1,22,32,22,23,34,3,43};
    cout<<"Before sorting: "<<endl;
    printArray(arr, 8);
    selectionSort(arr, 8, 0);
    cout<<"After sorting: "<<endl;
    printArray(arr, 8);
}