#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
int containsCycle(node *head){
    unordered_map<node*,bool> hashtable;
    node temp = head;
    while(temp!=NULL){
        // contains a cycle
        if(hashtable.count(temp)!=0){
            return true;
        }
        hashtable[temp] = true;
        temp = temp->next;
    }
    // doesnt contain a cycle
    return false;
}
int main(){
    node *a = NULL;
    insertAtHead(a,1);
    insertAtHead(a,2);
    insertAtHead(a,3);
    insertAtHead(a,3);
    insertAtHead(a,3);
    if(containsCycle(head)){
        cout<<"Cycle Found";
    }
    else{
        cout<<"Cycle not found";
    }
    return 0;
}