#include<iostream>
using namespace std;
    int score=12;
void a(){
    cout<<"Score in a is: "<<score<<endl;
}
void b(){
    cout<<"Score in b is: "<<score<<endl;
}
int main(){
    cout<<"Score in main func is: "<<score<<endl;
    a();
    b();
}

// Not preferred
// Anyone can change the value of the variable
// Reference variable is preferred for this purpose