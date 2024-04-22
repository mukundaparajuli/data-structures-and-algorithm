#include<iostream>
using namespace std;
bool findIndex(int *arr, int s, int e, int key){
    int mid=(e-s)/2+s;
        if(s>e) return false;
        if(arr[mid]==key) return true;
        if(arr[mid]<key) findIndex(arr, mid+1, e, key);
        else findIndex(arr, s, mid-1, key);
    
    return false;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,23,435,45646};
    if(findIndex(arr, 0, 14, 18)){
        cout<<"Key was found!"<<endl;
    }else{
        cout<<"key was not found!"<<endl;
    }
    return 0;
}