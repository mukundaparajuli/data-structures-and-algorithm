#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    for (int i : l)
    {
        cout << i << endl;
    }
    cout << "---------------------------" << endl;

    l.pop_back();
    l.pop_front();
    for (int i : l)
    {
        cout << i << endl;
    }
    cout << "---------------------------" << endl;
    l.push_back(2);
    l.push_front(1);

    cout << l.size() << endl;
    cout << "---------------------------" << endl;
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << endl;
    }
    // to copy a list we can do this
    list<int> n(l);
    cout << "-----------------------------" << endl;
    for (int i : n)
    {
        cout << i << endl;
    }

    // we can simply initialize a list like this
    list<int> m(5, 20); // this will take two arguments: no of elements and the elements
    cout << "---------------------------------" << endl;
    for (int i : m)
    {
        cout << i << endl;
    }
}

// Things to consider
// =>has two pointers one at the beginning and other at the ended
// =>push and pop operation can be done at the front as well as at the back
// =>randomly accessign the elements in the list is not possible