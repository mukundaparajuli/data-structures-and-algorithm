#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Mukunda");
    q.push("Harish");
    q.push("Ramesh");

    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size before popping: "<<q.size()<<endl;

    q.pop();

    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size after popping: "<<q.size()<<endl;
}