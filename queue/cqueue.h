class Queue{
    int *arr;
    int ms;
    int cs;
    int front;
    int rear;
public:
    Queue(int default_size=5){
        ms = default_size;
        arr= new int[ms];
        cs=0;
        front=0;
        rear=ms-1;
    }
    bool isFull(){
        return ms==cs; // max cap equals curretn size
    }
    bool isEmpty(){
        return cs==0;
    }
    void encqueue(int data){
        if(!isFull()){
            // insert at rear+1
            rear = (rear+1) % ms; // since its a circular queue
            arr[rear]=data;
            cs++;
        }
    }
    void decqueue(){
        if(!isEmpty()){
            //data= q_front();
            front = (front + 1)%ms;
            cs--;
        }
    }

    int q_front(){
        return arr[front];
    }
};
