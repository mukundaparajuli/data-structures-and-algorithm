#include<iostream>
using namespace std;

int main(){
    // initializing a 2d array
    // has 3 rows and 3 columns
    int arr[3][3]; 

    // taking the value column-wise
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // taking the value row-wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }


    // printing the array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
