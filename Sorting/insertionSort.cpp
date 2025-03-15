#include<iostream>
using namespace std;
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int* arr, int n){
    int temp;
    for(int i=1; i< n; i++){
        temp = arr[i];
        for(int j=i; j>=0; j--){
            if(arr[j]>temp){
                // right shift garaune
                arr[j+1]=arr[j];
            }else if(arr[j]<temp){
                arr[j+1]=temp;
                break;
            }
        }
    }
}
int main(){
    int arr[]={1,23,34,45,23,34,13,12,31};
    cout<<"Before sorting: "<<endl;
    printArray(arr, 9);
    // for(int i=1; i<9; i++){
    //     int temp=arr[i];
    //     int j=i-1;
    //     for(; j>=0; j--){
    //         if(arr[j]>temp){
    //           arr[j+1]=arr[j];  
    //         }else{
    //             break;
    //         }
    //     }
    //     temp=arr[j+1];
    // }
    insertionSort(arr, 9);
    cout<<"After sorting: "<<endl;
    printArray(arr, 9);
}