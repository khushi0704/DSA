#include <iostream>
using namespace std;
template<typename T>
struct Node{
    T data;
    // we use node * link and not int *link 
    // bcoz we are pointing to a node's address & not just an int var address
    // for example , to store address of a char array 
    // we use char *arr
    Node<T> *next=NULL;
};
// this top pointer will store the address of the node at top
template<typename T>
Node<T> *temp=NULL;
template<typename T>
class Stack{
    private:
    Node<T> *top=NULL;
    public:
    void push(T num){
        // create a new node
        Node<T> *n = new Node<T>();
        if(isempty()){
            top=n;
        }
        else{
        n->next=top;
        top=n;
        }
        n->data = num;
    }
    T pop(){
        // removes the top element
        string data = top->data;
        Node<T> *temp=top;
        top = top->next;
        delete temp;
        return data;
    }
    T stack_top(){
        return top->data;
    }
    void display(){
        Node<T> *temp=top;
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
    Stack<string> s;
    cout<<s.isempty()<<endl;
    s.push("h");
    s.push("e");
    s.push("l");
    s.push("l");
    s.display();
    cout<<"top: "<<s.stack_top()<<endl;
    s.pop();
    s.display();
    cout<<"top: "<<s.stack_top()<<endl;
    return 0;
}