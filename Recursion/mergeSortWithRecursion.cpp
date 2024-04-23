#include<iostream>
using namespace std;

void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr, int s, int e){
    int mid=(e-s)/2+s;
    
    int len1=mid+1-s;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    // copy values
    int mainIndex=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[mainIndex++];
    }

    for(int i=0; i<len2; i++){
        second[i]=arr[mainIndex++];
    }

    // merge two sorted array
    int index1=0;
    int index2=0;
    int mainArrayIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
}
void mergeSort(int *arr, int s, int e){
    int mid=(e-s)/2+s;
    if(s<e){
        // left array
        mergeSort(arr, s, mid);

        // right array
        mergeSort(arr, mid+1, e );

        merge(arr, s, e);
    }

}
int main(){
    int array[]={2,1,23,24,21,13,12,11,142,2423};
    cout<<"Before Swapping: "<<endl;
    printArray(array, 10);
    mergeSort(array, 0, 10);
    printArray(array, 10);
    return 0;
}