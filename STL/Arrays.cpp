#include <iostream>
#include <array>

using namespace std;
int main()
{
    int basic[4] = {1, 2, 3, 4}; //---->Basic form of array

    array<int, 4> a = {1, 2, 3, 4}; //----->Array in STL form --->it is dynamic

    // you can print the element in a basic array like this
    for (int i = 0; i < 4; i++)
    {
        cout << basic[i] << endl;
    }
    // you can access the element of an STL array like this
   
    cout << a.at(2) << " ";

    // size of a basic array
    cout << sizeof(basic)<<endl;

    // size of stl array
    cout << a.size()<<endl;


    // accessing the first and last element of an stl array
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    // check if the stl array is empty or not
    cout<<a.empty()<<endl;
    return 0;
}