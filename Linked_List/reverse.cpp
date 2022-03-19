#include <iostream>
using namespace std;
// forward decaration
class List;
class Node{ 
    int data;
public:
Node* next;
    Node(int d):data(d),next(NULL){}
        ~Node(){
        // called recursively
        if(next!=NULL){
            delete next;
        }
        cout<<"deleting node with data  "<<data<<endl;
    }
    int getData(){
        return data;
    }
    friend class List;
};

class List{
    Node * head;
    Node * tail;
    int searchHelper(Node *start,int key){
        if(start == NULL){
            // key was not found
            return -1;
        }
        if(start->data==key){
            return 0;
        }
        int idx = searchHelper(start->next,key);
        if(idx == -1){
            return -1;
        }
        else{
            return idx+1;
        }
    }
public:
    List():head(NULL),tail(NULL){}
       ~List(){
        // delete head 
        if(head != NULL){
            delete head;
        }
    }
    Node * begin(){
        return head;
    }
    int recursiveSearch(int key){
        int idx = searchHelper(head,key);
        return idx;
    }
    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            n-> next = head;
            head=n;
        }
    }
    void push_back(int data){
         if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            tail->next=n;
            tail=n;
        }
    }
    void pop_front(){
        // delete head
        // deleting head wil delete all the connected 
        // linked lists so 
        // we'll make head point to NULL
        Node *temp = head;
        // appoint the next head
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;
        }
        Node* temp = head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        Node * n =new Node(data);
        n->next=temp->next;
        temp->next=n;
    }
int search(int key){
    Node* temp = head;
    int idx=0;
    while(temp!=NULL){
        if(temp->data == key){
            return idx;
        }
        idx++;
        temp=temp->next;
    }
    return -1;
}
    void pop_back(){
        // remove the last node 
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        Node *lastNode = temp->next;
        temp->next=NULL;
     delete lastNode;
    }
    void pop_pos(int idx){
        if (head == NULL) {
      return;
   }
   Node* temp = head;
   if (idx == 1) {
      head = temp->next;
      free(temp);
      return;
   }
   for (int i = 2; temp != NULL && i < idx - 1; i++) {
      temp = temp->next;
   }
   if (temp == NULL || temp->next == NULL) {
      return;
   }
   Node *next = temp->next->next;
   free(temp->next);
   temp->next = next;
    }
    void reverse(){
        Node *cur = head;
        Node *nextNode;
        Node *prev = NULL;
        while(cur!= NULL){
            // save the next node
            nextNode = cur->next;
            // make the cur node point to prev 
            cur->next=prev;
            // update previous and current node
            prev=cur;
            cur=nextNode;
        }
        head=prev;
    }
};
int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.reverse();
    Node* head = l.begin();
    while(head!=NULL){
        cout<<head->getData()<<"->";
        head = head->next;
    }
      return 0;
}