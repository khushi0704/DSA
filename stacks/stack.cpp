#include <iostream>
using namespace std;
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
        if(isempty()){
          arr[top]=data;
        }
        else{
          ++top;
          arr[top]=data;
        }
        ++size;
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
        --top;
        --size;
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    /*array - fixed size , so write another fun if stack full
 use vectors or dynamic array to resolve this issue
 dynamic - help you grow array
 vectors double themselves
 linked list - dynamic allocation 

 all three - array , linkedlist and dynamic array takes 0(1) TC.
 
  */
 Stack s(4);
  if(s.isempty()){
    cout<<"stack is empty"<<endl;
  }
  
  s.push(1);
  cout<<s.displayTop()<<endl;
  s.push(2);
  s.push(3);
  cout<<s.displayTop()<<endl;
  s.push(4);
  s.display();
  s.pop();
  s.display();
   cout<<s.displayTop()<<endl;
    return 0;
}