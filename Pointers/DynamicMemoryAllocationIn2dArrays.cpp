#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int **arr = new int*[m];

    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    // Input array elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Output array elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
