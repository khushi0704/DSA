#include <iostream>
using namespace std;
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
        return ms==cs;
    }

    int q_front(){
        return arr[rear];
    }
    void encqueue(int data){
        if(!isFull()){
            // insert at rear+1
            rear=(rear+1)%ms;
            arr[rear]=data;
            cs++;
        }
    }
    void decqueue(){
        if(!isEmpty()){
           // int val = q_front();
            front=(front+1)%ms;
            cs--;
        }
    }
    bool isEmpty(){
        return cs==0;
    }
};
int main(){
    Queue q(7);
    q.encqueue(1);
    q.encqueue(2);
    q.encqueue(3);
    q.encqueue(4);
    q.encqueue(5);
    q.encqueue(6);
    q.encqueue(7);
    q.encqueue(8);
    q.decqueue();
    q.decqueue();
    while(!q.isEmpty()){
        cout<<q.q_front()<<endl;
        q.decqueue();
    }
    return 0;
}