#include <iostream>
#include <queue>
using namespace std;
// alternative way to compare
class compare{
public:
bool operator()(int a,int b){
    return a>b;
    }
};
int main(){
    int arr[]={10,15,20,13,6,90};
    int n = sizeof(arr)/sizeof(int);
    // max heap by  default
  //  priority_queue<int> heap;
    priority_queue<int,vector<int>,greater<int>> heap;
    for(int x:arr){
        heap.push(x);
    }
    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }
    return 0;
}