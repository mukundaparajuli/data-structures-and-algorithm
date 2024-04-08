#include<iostream>
#include<climits>
using namespace std;
int LargestRowIndex(int arr[][3], int row, int column){
    int maxm= INT_MIN;
    int index=-1;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<column; j++){
            sum+=arr[i][j];
            if(sum>maxm){
                maxm=sum;
                index=i;
            }
        }
    }
    cout<<"The largest sum in a row is:" <<maxm<<endl;
    return index;
}
int main(){
    int arr[3][3];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"The largest row in the array is of index: "<<LargestRowIndex(arr, 3, 3)<<endl;
    return 0;
}