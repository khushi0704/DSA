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
        rear=0;
    }
    bool isFull(){
        return ms==cs
    }


    int q_front(){
        return arr[front];
    }
    void encqueue(int data){
        if(!isFull){
            // insert at rear+1
            rear=(rear+1)%ms;
            arr[rear]=data;
            cs++;
        }
    }
    void decqueue(){
        if(!isEmpty()){
            data= q_front();
            front=(front+1)%ms;
            cs--;

        }
    }
    bool isEmpty(){
        return cs==0;
    }
};
