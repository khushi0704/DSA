#include <iostream>
using namespace std;
struct Node{
    int data;
    // we use node * link and not int *link 
    // bcoz we are pointing to a node's address & not just an int var address
    // for example , to store address of a char array 
    // we use char *arr
    Node *next=NULL;
};
// this top pointer will store the address of the node at top
Node *temp=NULL;
class Stack{
    private:
    Node *top=NULL;
    public:
    void push(int num){
        // create a new node
        Node *n = new Node();
        if(isempty()){
            top=n;
        }
        else{
        n->next=top;
        top=n;
        }
        n->data = num;
    }
    int pop(){
        // removes the top element
        int data = top->data;
        top = top->next;
        return data;
    }
    int stack_top(){
        return top->data;
    }
    void display(){
        Node *temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool isempty(){
        return top==NULL;
    }
};
int main(){
    Stack s;
    cout<<s.isempty()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    cout<<"top: "<<s.stack_top()<<endl;
    s.pop();
    s.display();
    cout<<"top: "<<s.stack_top()<<endl;
    return 0;
}