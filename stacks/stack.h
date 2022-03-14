class Stack{
    // insertion and deletion happens from the same end
    private:
    int *arr;
    int size;
    int max_size;
    int top;
    public :
    // basic operation in a stack
    Stack(int default_size=5){
        max_size = default_size;
        size=0;
        arr = new int[max_size];
        top=0;
    }
    void push(int data){
        // increase the current size of the array and push element 
        // into that position
        top++;
        if(isempty()){
            arr[0]=data;
            return;
        }
        // otherwise
        size++;
        arr[size]=data;
    }
    int displayTop(){
        return arr[top];
    }
    bool isempty(){
        return size==0;
    }
    void pop(){
        int num = arr[top];
        cout<<num<<endl;
        top--;
        size--;
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
