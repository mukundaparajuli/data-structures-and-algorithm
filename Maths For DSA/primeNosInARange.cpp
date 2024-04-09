#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no up to which you want to determine the no of prime nos: "; cin>>n;

    int count=0;
    vector<bool> prime(n+1, true);
    prime[1]=prime[0]=true;
    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;

                // here j+i is done because j is the second multiple of i first and when we add j to the
                // value if i we get the third multiple of i since i is constant and j increases we can 
                // traverse through all the no. all the multiples are considered composite or non prime
            for(int j=2*i; j<n; j+=i){ 
                prime[j]=false;
            }
        }
    }
    cout<<"The total no  of prime numbers here are: "<<count;
    return 0;
}