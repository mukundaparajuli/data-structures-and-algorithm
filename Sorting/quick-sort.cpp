#include<iostream>

using namespace std;

void printArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a= *b;
    *b= temp;
}

int partition(int* arr, int lb, int ub){
    int pivot, start, end;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while(start<end){
        while(arr[start]<= pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
        swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quickSort(int* arr, int lb, int ub){
    if(lb<ub){
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc);
        quickSort(arr, loc+1, ub);
    }
}

int main(){
    int arr[] = {1, 23, 12, 13, 46, 53, 22};
    cout<<"before sorting: "<<endl;
    printArray(arr, 7);    

    quickSort(arr, 0, 6);
    
    cout<<"after sorting: "<<endl;
    printArray(arr, 7);   
}
// euta array, tesko lower bound (lb) ra upper bound (ub) pathaune.  
// yadi upper bound lower bound bhanda thulo xa bhane `partition` function call garne.  

// **Partition Function:**  
//  - euta pivot element choose garne (first element).  
//  - `start` ra `end` variable declare garne, jasma `start = lb` ra `end = ub` assign garne.  
//  - jaba samma `start < end` huncha, tala ko steps follow garne:  
//      - jaba samma `arr[start] < pivot` huncha, `start` badhaudai jane.  
//      - jaba samma `arr[end] > pivot` huncha, `end` ghataudai jane.  
//      - yadi dui condition milena bhane, `arr[start]` ra `arr[end]` swap garne (start < end hunuparcha).  
//  - jaba loop bata bahira niskincha, `arr[end]` ra `arr[lb]` swap garne.  
//  - `end` return garne.  

// **Quick Sort Function:**  
//  - `partition` function le diye ko `loc` (pivot ko naya position) anusar feri `quickSort` call garne:  
//      - `quickSort(arr, lb, loc - 1);` (pivot ko baya side)  
//      - `quickSort(arr, loc + 1, ub);` (pivot ko daya side)  

// esari array sort huncha.  
