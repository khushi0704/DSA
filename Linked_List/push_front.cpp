#include <iostream>
using namespace std;

/*
 single block of memoeries with partition
 multiple locks of memory connected to each other 
 widely spreads in heap memory linked to each other
 arrays are fixed size , contigous block of memory ,inserion 
 deletion is costly , because baad k elements ko ek ek step 
 badhana/ghatana padega
 size can be modified
 non contigous memory
 insetion / deletion at any point is easier

example : suppose theres a linkedlist 1 2 3 , 1 and 3 are head and tail resp

we need to insert 0 at front , so n points to the
points to the node that contains 0 , and to access 
the next of that node 

we'll do n->next=head
n->next is same as (*n).next
*/

class Node{
   
 int data;
    Node* next;
public:
    Node(int d):data(d),next(NULL){}
};

class List{
    Node * head;
    Node * tail;
public:
    List():head(NULL),tail(NULL){}

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
};
int main(){

}