#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};
node* deleteTail(node * head){
    //Complete this function
    node * temp=head;
    if(temp==NULL){
        // empty linkedlist 
        return NULL;
    }
    if(temp->next==NULL){
        // only one element is there
       head=NULL;
    }
    else{
        while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    }

    return head;
}

