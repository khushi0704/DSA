
// forward decaration
class List;

class Node{ 
    int data;
    
public:
Node* next;
    Node(int d):data(d),next(NULL){}
    int getData(){
        return data;
    }
    friend class List;
};

class List{
    Node * head;
    Node * tail;
public:
    List():head(NULL),tail(NULL){}
    Node * begin(){
        return head;
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
int recursiveSearch(int key){
    
}
/*bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}
*/
};