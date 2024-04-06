#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp= *a;
    *a= *b;
    *b=temp;
}
void moveZeroes(int arr[], int n){
    int i=0; 
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(&arr[j], &arr[i]);
            i++;
        }
    }

    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[]={1,0,12,0,9,8,3,0,0};
    moveZeroes(arr, 9);
    return 0;
}