#include<iostream>
using namespace std;

bool isFound(int arr[][3], int target, int row, int column){
    for(int i=0; i<row;i++){
        for(int j=0; j<row; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3]; 
    int target;
    // taking the value column-wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    // printing the array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Enter the element you would like to search: "<<endl;
    cin>>target;

    if(isFound(arr, target, 3, 3)){
        cout<<"Target Element is present in the array."<<endl;
    }else{
        cout<<"Target Element is not present in the array."<<endl;

    }
    return 0;
}
