#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the no. of rows for the jagged array:";
    cin >> row;

    // input for the array
    int **arr = new int*[row];
    int *col = new int[row];
    for (int i = 0; i < row; i++) {
        cout << "Enter the no. of columns for row " << i + 1 << ": ";
        cin >> col[i];
        arr[i] = new int[col[i]];
        cout << "Enter elements for row " << i + 1 << ": " << endl;
        for (int j = 0; j < col[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // displaying the array in the output
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // delete the memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] col;
    return 0;
}
