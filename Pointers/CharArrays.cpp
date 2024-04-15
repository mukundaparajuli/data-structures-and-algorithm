// the implementation of cout is quite different for character array as compared to integer array
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    char ch[9]="Mukunda";

    // this will print the address of the first element in the array
    cout<<arr<<endl;

    // this will print the entire array i.e the string rather than the address
    cout<<ch<<endl;

    // using pointer
    // cout's implementation for integer and character array is different using pointer as well 
    int *iptr=&arr[0];
    char *cptr=&ch[0];

    // in this case as well it will print the address of the integer array's first element
    cout<<iptr<<endl;
    
    // in this case as well it will print the whole array rather than the address of the array
    cout<<cptr<<endl;



    // Pointer acts differently in case of character as well
    char temp='m';
    char *temptr=&temp;

    // when we do anything like this it will first print from the address pointed by the pointer variable temptr
    // it will print from that address until a null character apperars
    // so it will not print address but will print a random string starting from the memory location pointed
    //  by the pointer variable until a null character is found
    cout<<temptr<<endl;


    // risky 
    // might be pointing the address that cannot be accessed
    // might be read only memory
    // char *ccptr="Hello";
    return 0;
}