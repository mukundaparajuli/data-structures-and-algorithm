#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    //  adds the element in the deque in back
    d.push_back(2);
    // add the element in the deque in front
    d.push_front(11);

    // lets print the deque
    for (int i : d)
    {
        cout << i << endl;
    }

    // randomly accessing the element
    cout << d.at(0) << endl;

    d.push_front(3);
    d.push_back(4);

    cout << "----------------------------------" << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << "----------------------------------" << endl;

    cout << d.size() << endl;
    cout << "----------------------------------" << endl;
    // erase the no. of elements
    //  you should provide two arguments from where to delete and upto which you need to delete
    d.erase(d.begin(), d.begin() + 2);
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << "----------------------------------" << endl;
    cout << d.size() << endl;
}

// things to consider in deque
// =>double ended queue
// =>you can do push and pop operation on the front as well as back of the queue
// =>random access of the elelment is possible usign at operation
// =>when we do erase operation we need to provide the range of which you want to delete
// =>when wae do erase operation the size of the queue will change but the maximum size or the capacity remains same