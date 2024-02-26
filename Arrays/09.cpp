#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> a){
    int s=0;
    int e=a.size()-1;
    while(s<=e){
       swap(a[s], a[e]);
        s++;
        e--;
    }
    return a;
}

void print (vector<int> b){
    for(int i=0;i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(22);
    v.push_back(33);
    v.push_back(4);
    v.push_back(5);
    cout<<"Before reversing the array"<<endl;
   print(v);
   vector<int>ans=reverse(v);
    cout<<"After reversing the array"<<endl;
   print(ans);
   return 0;
}