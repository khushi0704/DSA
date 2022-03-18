#include <iostream>
#include <stack>
using namespace std;
// reverse a stack using recursion using another stack
void reverse_stack(stack<int> &s,stack<int> &v){
    if(s.empty()){
        // push it inside another stack
        return;
    }
  int temp = s.top();
  s.pop();
  v.push(temp);
  reverse_stack(s,v);
}
int main(){
    stack<int> s;
    stack<int> v;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse_stack(s,v);
    while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
    }
    return 0;
}
