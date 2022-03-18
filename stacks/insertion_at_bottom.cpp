#include <iostream>
#include <stack>
using namespace std;
// we are going to do it recursively
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
int main(){
    // insert at bottom 
    stack<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    insertAtBottom(v,5);
    while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
    }
    return 0;
}