// loop goes from 0 to n-1 and second loop goes from 0 to n-1
// the unoptimized code
#include <iostream>
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// Here the first loop moves from 0 to n and the second loop moves from 0 to n-i
//  since the last index has already been sorted so we dont need to sort that

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         std::cout << arr[i] << " ";
//     }
// }

// the most optimized function
// here the loop moves from 0 to n and the second loop moves from 0 to n-1
// here the condition is checked if the swapping has happened or not
// if the swapping has not happened for a whole loop then it indicates that the array has already been sorted
// so there is no need of sorting
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (swap == false)
        {
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 3, 12, 13, 132, 2};
    bubbleSort(arr, 6);

    return 0;
}