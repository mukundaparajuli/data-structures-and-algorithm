#include<iostream>
using namespace std;

void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int *arr, int s, int e){
    int pivot=arr[s];
    int count=0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot) count++;
    }

    int pivotIndex=s+count;
    swap(arr[s], arr[pivotIndex]);

    int i=s,j=e;
    while(i<pivotIndex && j> pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }
        
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e){

    if(s>=e) return;

    int p=partition(arr, s, e);
    
    // left part
    quickSort(arr, s, p-1);

    // right part
    quickSort(arr, p+1, e);
}

int main(){
    int arr[]={12,11,1,34,134,123,123,21,12,111,2321,546,765,56};
    cout<<"Before sorting: "<<endl;
    printArray(arr, 14);

    quickSort(arr, 0, 13);

    cout<<"After sorting: "<<endl;
    printArray(arr, 14);

    return 0;
}