#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>abc;


    // the complexity of the insertion will be O(log(n))
    abc.insert(2);
    abc.insert(5);
    abc.insert(0);
    abc.insert(4);
    abc.insert(1);
    abc.insert(3);

    for(auto i:abc){
        cout<<i<<" ";
    }
    cout<<endl;

    // remove the element at the beginning
    abc.erase(abc.begin()++);
    // remove the element at the second position
    abc.erase(abc.begin()++);
    
set<int>::iterator it=abc.begin();
it++;
abc.erase(it);

    for(auto i:abc){
        cout<<i<<" ";
    }

    cout<<endl;
    // we can use count to check if the particular element is present in the set or not
    cout<<"2 is present?"<<abc.count(2)<<endl; 
    cout<<"9 is present?"<<abc.count(9)<<endl; 
    cout<<endl;

    // we can use find keyword to get the iterator of the particular element
    set<int>::iterator it1=abc.find(2);
    for(auto i=it1;it1!=abc.end();it1++){
        cout<<*it1<<" ";
    }


}

// Set will store the unique data only and if there is a duplicate then it will take only one value.
// when we get the data we will get the data in the sorted format
// implemented using bst
// if you have already included an element you cannot modify the element afterwards
// either you will have to erase/delete the element
// Set can be unordered or ordered
// ordered set is a bit slower than unordered
// in unordered set elements are not in sorted order