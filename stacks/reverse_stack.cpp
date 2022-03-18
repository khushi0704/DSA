#include <iostream>
#include <stack>
using namespace std;
// reverse a stack using recursion using another stack
void insertAtBottom(stack<int> &v,int data){
    if(v.empty()){
        v.push(data);
        return;
    }
    int temp = v.top();
    v.pop();
    insertAtBottom(v,data);
    v.push(temp);
}
void reverse_stack(stack<int> &s){
    // we'll empty the stack until we no longer can
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse_stack(s);
    insertAtBottom(s,temp);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse_stack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
