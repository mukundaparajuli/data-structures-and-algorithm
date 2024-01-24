#include <iostream>
using namespace std;
bool isPossible(int boards[], int n, int k, int mid)
{
    int painterCount = 1;
    int totalArea = 0;
    for (int i = 0; i < n; i++)
    {
        if (totalArea + boards[i] <= mid)
        {
            totalArea += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || boards[i] > mid)
            {
                return false;
            }
            totalArea = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(int boards[], int n, int k)
{
    int s = 0;
    int e = 0;
    int totalArea = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        totalArea += boards[i];
    }
    e = totalArea;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(boards, n, k, mid))
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
    int arr[] = {10, 20, 30, 40};
    cout << "The ans is " << findLargestMinDistance(arr, 4, 2);
    return 0;
}