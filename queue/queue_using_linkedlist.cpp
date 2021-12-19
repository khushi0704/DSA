/*
3. Write a menu driven program to implement linear queue using linked list  and switch-case with following options : 
1.Insert 
2.Delete 
3.Display element at the front 
4.Display all elements of the queue 
5.Quit 
*/
#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node*front=NULL;
node*rear=NULL;
node*temp;
bool Lempty(){
    return front==NULL;
}
void Lfront(){
    if(!Lempty()){
    cout<<"front : "<<front->data<<endl;
    }
    else{
        cout<<"queue underflow"<<endl;
    }
}
void Lpush(int d){
    node *new_node=new node();
    new_node->data=d;
    new_node->next=NULL;
if (Lempty()) { //empty 
     rear=new_node;
     front=rear;
   } 
   else {
      rear->next=new_node;
      rear=new_node;
   }
}
void Lpop(){
    if(Lempty()){
        cout<<"queue underflow"<<endl;
    }
 else{
 //only one element/node in queue.
 if( front == rear)
 {
  free(front);
  front = rear = NULL;
 }
 else
 {
  node *ptr = front;
  cout<<"deleted : "<<ptr->data<<endl;
  front = front->next;
  free(ptr);
 }
}

}
void Ldisplay(){
    temp=front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Lpop();
    Lpush(1);
    Lpush(2);
    Lfront();
    Lpush(3);
    Lpush(4);
    Lpop();
    Ldisplay();
    return 0;
}