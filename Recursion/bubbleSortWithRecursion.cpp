#include<iostream>
using namespace std;
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void sortArray(int *arr, int size){
    if(size==0|| size==1) return;

    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, size-1);
}
int main(){
    int arr[]={23,324,234,324,4325,453,34,53,345,345};
    cout<<"Before swap: "<<endl;
    printArray(arr, 10);

    sortArray(arr, 10);

    cout<<"After swap: "<<endl;
    printArray(arr, 10);
    return 0;
}