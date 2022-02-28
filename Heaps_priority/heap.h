#include <iostream>
#include <vector>
using namespace std;
class Heap{
//we're going to use dynamic array
// making it private so our memory allocation is hidden
// it will only be called by its methods 
     vector<int> v;
     public :
    Heap(int default_size = 10){
        v.reserve(default_size+1);
        // this will not be used for storing any element
        v.push_back(-1);
    }

    // we also need to maintain till what position we have 
    // stored the data ,can be found out using v.size()-1
    void push(int data){
        // add data to the heap
        v.push_back(data);
        int idx = v.size()-1;
        int parent = idx/2;
        while(idx > 1 && v[idx] < v[parent]){
            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }


};