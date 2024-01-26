#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // vector====>just like array i.e stores element in continuous memory location
    //          you can add element dynamically
    //          when the capacity of the vector is fully filled when you try to add another element it increases its size by twice
    //          capacity is the memory location occupied by the vector
    //          size is the no. of elements in the vector

    // intitalizing a vector
    vector<int> v;

    // intitalizing vector with the initial value
    vector<int> a(5, 1); // here a vector a will be declared whose size will be 5 and each elements are initialized with the value 1
    for (int i : a)
    {
        cout << a.at(i) << endl;
    }

    // you can determine the size and capacity of the vector like this
    cout << "size of vecotr v " << v.size() << endl;
    cout << "capacity of vector v " << v.capacity() << endl;
    cout << "size of vecotr a " << a.size() << endl;
    cout << "capacity of vector a " << a.capacity() << endl;

    // you can add data to the vector like this
    v.push_back(1);
    cout << "size of v==" << v.size() << endl;         // 1
    cout << "capacity of v==" << v.capacity() << endl; // 1

    v.push_back(2);
    cout << "size of v==" << v.size() << endl;         // 2
    cout << "capacity of v==" << v.capacity() << endl; // 2

    v.push_back(3);
    cout << "size of v==" << v.size() << endl;         // 3
    cout << "capacity of v==" << v.capacity() << endl; // 4

    // you can access random element of the vector like the same of array
    cout << v.at(2) << endl;

    // you can access the first and last element in the vector like this
    cout << "first element in vector v= " << v.front() << endl;
    cout << "last element in vector v= " << v.back() << endl;

    // you can remove any element form the vector like this using pop_back
    // popping the elelment wont change the capacity of the vector but only the size of the vector
    cout << "Before popping" << endl;
    cout << "size of vector v= " << v.size() << endl;
    cout << "capacityf vector v= " << v.capacity() << endl;
    v.pop_back();
    cout << "After popping" << endl;
    cout << "size of vector v= " << v.size() << endl;
    cout << "capacityf vector v= " << v.capacity() << endl;
}