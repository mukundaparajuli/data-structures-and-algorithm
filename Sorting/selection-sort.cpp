#include <iostream>
using namespace std;
void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int *a, int* b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
void selectionSortNew(int* arr, int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(arr[i]>arr[j])
            swap(&arr[i], &arr[j]);
        }
    }
}
int main()
{
    int arr[] = {1, 23, 12, 13, 46, 53, 22};
    cout<<"before sorting: "<<endl;
    printArray(arr, 7);    
    selectionSortNew(arr, 7);
    cout<<"after sorting: "<<endl;
    printArray(arr, 7);    
        
    return 0;
}