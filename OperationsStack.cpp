#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}



int main(){
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // cout<<s.size()<<endl;
    // cout<<s.empty()<<endl;
    // cout<<s.top()<<endl;
    
    printStack(s);
    
}