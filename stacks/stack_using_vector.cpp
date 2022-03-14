#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class Stack{
    private:
    vector<T> arr;
    public:
    void push(T num){
        arr.push_back(num);
    }
    T pop(){
        arr.pop_back();
    }
    T stack_top(){
        int top = arr.size()-1;
        return arr[top];
    }
    void display(){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool isempty(){
        return arr.size()==0;
    }
};
int main(){
    Stack<int> s;
    cout<<s.isempty()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    cout<<"top: "<<s.stack_top()<<endl;
    s.pop();
    s.display();
    cout<<"top: "<<s.stack_top()<<endl;
    return 0;
}