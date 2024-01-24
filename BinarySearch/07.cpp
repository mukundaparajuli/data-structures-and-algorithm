#include <iostream>
using namespace std;

bool isPossible(int arr[], int mid, int n, int m)
{
    int studentCount = 1;
    int totalPages = 0;
    for (int i = 0; i < n; i++)
    {
        if (totalPages + arr[i] <= mid)
        {
            totalPages += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            totalPages = arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int n, int m)
{
    int s = 0;
    int totalPages = 0; // Correct initialization
    for (int i = 0; i < n; i++)
    {
        totalPages += arr[i];
    }
    int e = totalPages;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, mid, n, m))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    cout << "The minimum value for the maximum no of pages allocated to a student is " << bookAllocation(arr, 4, 2) << endl;
    return 0;
}
