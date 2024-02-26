#include<iostream>
#include<array>
using namespace std;

void mergeSortedArray(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0;
    int k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(i<n){
        while(i<n){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }else if(j<m){
        while(j<m){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[]={1,3,4,7};
    int arr2[]={2,5,6,8,9};
    int n=4;
    int m=5;
    int arr3[10];
    mergeSortedArray(arr1, n, arr2, m, arr3);
    print(arr3, 9);
}