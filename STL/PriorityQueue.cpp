#include <iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int> > mini;

    // pushing elements to the maxi queue
    maxi.push(90);
    maxi.push(220);
    maxi.push(330);
    maxi.push(43);
    maxi.push(900);

    // getting the maximum element
    int n=maxi.size();
    for(int i=0; i<n; i++){
        cout<<"First element of the maxi queue is "<<maxi.top()<<endl;
        maxi.pop();
    }
    cout<<endl<<endl;
    // pushing elements to the mini queue
    mini.push(100);
    mini.push(200);
    mini.push(300);
    mini.push(400);
    mini.push(500);

    // getting the minimum element
    int m=mini.size();
    for(int i=0; i<m; i++){
        cout<<"First element of the mini queue is "<<mini.top()<<endl;
        mini.pop();
    }
}
// In case of priority_queue, if we store all the data that we have in that queue we can get the data in mainly two 
    // 1. We can get the maximum value at top of the queue -->in case of maxi heap
    // 2. We can get the minimum value at the top of the queue -->in case of mini heap