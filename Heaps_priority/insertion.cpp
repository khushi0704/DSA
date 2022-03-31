#include <iostream>
#include <vector>
using namespace std;
class MaxHeap{
 vector<int> v;
 public:
    MaxHeap(int default_size){
        v.reserve(default_size);
        // we want to start pushing elements from index 1
        // lets not do this with 0 based indexing so ..
        v.push_back(-1);
    }
    void insert(int data){
        v.push_back(data);
        // take out the index of this element
        int idx = v.size()-1;
        // we know that parent of i is i/2
        int parent = idx/2;
        // to avoid max heap property violation
        while(idx>1 && v[parent]<v[idx]){
            swap(v[idx],v[parent]);
            // now the idx becomes parents 
            idx = parent;
            parent = parent/2;
        }
    }
    int extract_Max(){
        int data = maximum();
        // swap the first and last element
        swap(v[1],v[v.size()-1]);
        // reduce the heap size by 1
        v.pop_back();
        // now , call max heapify to retain maxheap property
        max_heapify(v,1,v.size()-1);
        return data;
    }
    bool empty(){
        return v.size()==1;
    }
    void max_heapify(vector<int> &v,int i,int N){
        // find out the left and right childs
        int left_idx = 2*i;
        int right_idx = 2*i+1;
        int largest = i;
        if(left_idx<=N && v[left_idx]>v[i]){
            largest = left_idx;
        }
        if(right_idx<=N && v[right_idx]>v[i]){
            largest=right_idx;
        }
        if(largest!=i){
            // swap them
            swap(v[largest],v[i]);
            // recursively call max heapify
            max_heapify(v,largest,N);
        }
    }

    void build_MaxHeap(){
        int N = v.size()-1;
        for(int i=N/2;i>=1;i--){
            max_heapify(v,i,N);
        }
    }
    int maximum(){
        return v[1];
    }
    void display(){
        for(int i=1;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MaxHeap h(5);
    h.insert(4);
    h.insert(1);
    h.insert(5);
    h.insert(2);
    h.insert(0);
    h.display();
    cout<<h.maximum()<<endl;
    cout<<h.extract_Max()<<endl;
    h.display();
    return 0;
}