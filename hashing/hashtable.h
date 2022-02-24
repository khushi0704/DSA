#include <cstring>
#include <iostream>
using namespace std;
template<typename T>
class Node{
    public:
    string key;
    T value; // can be int , float ,object etc
    Node * next; // stores the address of next pointer

    // constructor 
    Node(string key,T value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};
template<typename T>
class HashTable{
    Node<T> ** table;
    int cs; // curretn size
    int ts; // total size
    

    int hashfun(string key){
        int power=1;
        int idx = 0;
        for(auto ch : key){
            idx = (idx + (ch*power))%ts;
            power=(power*29)%ts;
        }
        return idx;
    }

    void rehash(){
        // save the ptr to the oldtable and we will do insertions in the new table
       
        Node<T> **oldTable = table;
        // save its size
           int oldTs = ts;
            ts = 2*ts+1;
        table = new Node<T>*[ts]; // you should make it prime
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
        // copy elements from the old table to
        // the new table
        for(int i=0;i<ts;i++){
            Node<T> *temp= oldTable[i];
            while(temp!=NULL){
                string key = temp->key;
                T value = temp->value;
                // happens in the new table
                insert(key,value);
                temp=temp->next;
            }
            // now delete the old table enteries
            if(oldTable[i]){
                delete oldTable[i];
            }
        }
        //its a static/local variabble so it will destrpy
        // when this funtion call is over
        delete [] oldTable;
    }
    public:
    HashTable(int default_size = 7){
        ts=default_size;
// a table pointing to an array
        table = new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
    }
    void insert(string key,T value){
        int idx = hashfun(key);
        Node<T> *n= new Node<T>(key,value);

        // insertion at head of the linked list
        n->next = table[idx];
        table[idx]=n;
        cs++;

        float load_factor = cs/float(ts);
        if(load_factor>0.7){
            rehash();
        }
    }
    T* search(string key){
        int idx = hashfun(key);
        Node<T> *temp = table[idx];
        while(temp!=NULL){
            if(temp->key == key){
                return &temp->value;
            }
        }
        return NULL;
    }
    void erase(string key){
        int idx = hashfun(key);
        Node<T> *temp= table[idx];
        if(temp->key == key){
            table[idx]=temp->next;
           // delete temp;
            return;
        }
        else{
            Node<T> *prev = temp;
            temp=temp->next;
        while(temp!=NULL){
            if(temp->key == key){
                prev->next=temp->next;
               // delete prev;
               // delete temp;
                return;
            }
            prev=temp;
            temp=temp->next;
        }
        }
    }
    void print(){
        // iterate over the bucket
        for(int i=0;i<ts;i++){
            cout<<" bucket "<<i<<"->";
            // iterate over the items inside the bucket
            Node<T>* temp=table[i];
            while(temp!=NULL){
                cout<<temp->key<<" -> ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};