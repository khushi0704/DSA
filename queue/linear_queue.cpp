/*
1. Write a menu driven program to implement linear queue using array and  switch-case with following options : 
1.Insert 
2.Delete 
3.Display element at the front 
4.Display all elements of the queue 
5.Quit 
*/
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
    void qmenu(){
        cout<<"1.Insert \n2.Delete \n 3.Display element at the front \n4.Display all elements of the queue \n5.Quit "<<endl;
    cout<<endl;
    }
    bool full(){
        return cs==ms;
    }
    bool empty(){
        return cs==0;
    }
    int qfront(){
        return arr[front];
    }
    void push(int data){
        if(full()){
            cout<<"queue full"<<endl;
        }
        else if(empty()){
            arr[rear]=data;
            cs++;
        }
        else{
            // insert at rear
            rear=rear+1;
            arr[rear]=data;
            cs++;
        }
    }
    void pop(){
        int rdata;
        // remove from front
            rdata=arr[front];
            cout<<"deleted element is : "<<rdata<<endl;
            front++;
            cs--;
    }
    void qdisplay(){
     for(int i=front;i<=rear;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    }
};
int main(){
        Queue q;
     /*   q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        q.pop();
        */
        int choice,x;
        int flag=1;
            q.qmenu();
       while(flag==1){
            cout<<"enter your choice : "<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                // insert
                cout<<"Input the element for adding in queue :"<<endl;
                cin>>x;
                q.push(x);
                break;
                case 2:
                // delete
                if(q.empty()){
                    flag=0;
                    cout<<"queue underflow"<<endl;
                }
                else{
                    q.pop();
                }
                break;
                case 3:
                // display element at front
                cout<<"front : "<<q.qfront()<<endl;
                break;
                case 4:
                // display all elements of the queue
                q.qdisplay();
                break;
                default:
                cout<<"invalid option"<<endl;
                break;
            }
        }
    
    return 0;
}