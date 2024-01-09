#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] <= key)
            {
                start = mid + 1;
            }
            else if (arr[mid] >= key)
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int evenArray[6] = {2, 3, 23, 32, 34, 453};
    int oddArray[5] = {21, 121, 213, 222, 321};
    int evenIndex = binarySearch(evenArray, 6, 23);
    cout << "The index of 23 in the even array is " << evenIndex << endl;
    int oddIndex = binarySearch(oddArray, 5, 23);
    cout << "The index of 222 in the odd array is " << oddIndex << endl;
    return 0;
}

/*
-first ma chai hamro binarySearch bhanne function le 3 ta arguments haru paaunxa
    -array, size of the array, key
-starting of the array lai hamle 0 set garxau ra end lai size-1 set garxau
-euta variable mid banauxau jasle start ra end of the array ko index ko mid lai represent garxau
-edi tyo array ko mid index ma bhaeko element hamro key sanga match bhayo bhane tyo mid ko value return hunxa
    -yani ki array ko tyo index jun ma hamro key value xa tyo return hunxa
-edi testo bhaena bhane hamro mid index ma bhaeko value compare hunxa key sanga
    -mid index ko value key bhanda sano xa bhane hamle tesko right side ko array lai naya array banaera check garxau
    -tesko lagi hamle start ko value mid+1 garxau ra end ko value default nai xoddxau
    -edi mid index ko value key ko bhanda thulo bhayo bhane array ko left side lai hamle naya array consider garxar
    -tesko lagi hamle end ko value mid-1 garxau bhane start ko value default nai xoddxau
-tespaxi hamle feri tei process lai repeat garxau as long as start ko value is less than end ko value
-ani edi tyo key tes array ma xaina bhane hamle -1 return garxau ra function ko kaam sakkinxa





******Things to consider in binary Search*******
-Binary Search is only applicable in monotonic array
    -i.e. either the array is in ascending order or in descending order
-If the size of an array is very big and the value of start and end is 2^31-1 the value of mid can
 exceed the value of maximum integer value while doing
 mid=(start+end)/2 so there is an alternate for that and that is to define mid as mid=start+(end-start)/2
*/