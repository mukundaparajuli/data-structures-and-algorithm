// Map is the data structure in which data is stored in key value pairs.
// same key cannot be used for multiple values.
#include<iostream>
#include <map>
using namespace std;

int main(){
    map<int,int> m;
    m[1]=10;
    m[2]=20;
    m[3]=30;
    m[4]=40;
    m[10]=324100;
    m[11]=0;
    m[12]=122340;
    m[9]=90;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // find if an element is present in the map
    cout<<"Finding 32==>"<<m.count(32)<<endl;
}