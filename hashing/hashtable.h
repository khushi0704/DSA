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
};
template<typename T>
class HashTable{
    Node<T> ** table;
    int cs; // curretn size
    int ts; // total size
    public:

    int hashfun(string key){
        int power=1;
        int idx = 0;
        for(auto ch : key){
            idx = (idx + (ch*power))%ts;
            power=(power*29)%ts;
        }
        return idx;
    }

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
    }
};