#include<iostream>
#include<vector>
using namespace std;

void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int* arr, int start, int mid, int end){
    int i= start, j= mid+1;
    vector<int> temp;
    // for either the left or right part of the array whichever might sort first
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // until this either the left side or the right side of the array will have been sorted
    // if left side has been sorted the value of i will be greater than mid and it will break the loop
    // if right side has been sorted the value of j will be greater than end and it will break the loop

    // if the left side has been sorted and right side is yet to be sorted
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    // if the right side has been sorted and left side is yet to be sorted
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    for(int i=0; i<temp.size(); i++){
        arr[i+start]=temp[i];
    }

}

void mergeSort(int* arr, int start, int end){
    if(start<end){
        int mid = start +(end-start)/2;

        mergeSort(arr, start, mid); //left half
        mergeSort(arr, mid+1, end); //right half
        
        merge(arr, start, mid, end);
    }
}

int main(){
int arr[] = {1, 23, 12, 13, 46, 53, 22};
    cout<<"before sorting: "<<endl;
    printArray(arr, 7);    

    mergeSort(arr, 0, 6);
    
    cout<<"after sorting: "<<endl;
    printArray(arr, 7); 
}

// - suru ma hamle array lai divide garxau
// - sabai bhanda pahila array ko midpoint nikalxau
//      - start dekhi mid samma ko euta sub-array banaune
//      - mid+1 dekhi end samma ko arko sub-array banaune
// - esari nai hamle array lai recursively divide garxau jaba samma start < end condition fulfil hunxa
// - aba merge garne bela jaba array euta-euta element ma divide bhayisakxa
// - merge garna ko lagi hamle duita sub-array ko first index ma pointer (i ra j) rakhxau
// - aba merge garna duita sub-array ko arr[i] ra arr[j] lai compare garxau
//      - jun sano cha tyo naya sorted array ma rakhxau
//      - tyo pointer lai next element tira badhauxau
// - kunai euta sub-array ko sabai elements sorted array ma copy bhaisakepaxi
//      - bacheko arko sub-array ko elements direct copy garxau
// - antima, sorted array ko sabai elements original array ma copy garxau
