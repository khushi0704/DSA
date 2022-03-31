#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    public:
     int extract_Max(vector<int> &v){
        int data = maximum(v);
        // swap the first and last element
        int last = v.size()-1;
        swap(v[0],v[last]);
        // reduce the heap size by 1
        v.pop_back();
        // now , call max heapify to retain maxheap property
        max_heapify(v,0,v.size()-1);
        return data;
    }
    void max_heapify(vector<int> &v,int i,int N){
        // find out the left and right childs
        int left_idx = 2*i+1;
        int right_idx = 2*i+2;
        int largest = i;
        if(left_idx<N && v[left_idx]>v[i]){
            largest = left_idx;
        }
        if(right_idx<N && v[right_idx]>v[i]){
            largest=right_idx;
        }
        if(largest!=i){
            // swap them
            swap(v[largest],v[i]);
            // recursively call max heapify
            max_heapify(v,largest,N);
        }
    }

    void build_MaxHeap(vector<int> &v){
        int N = v.size();
        for(int i=N/2;i>=0;i--){
            max_heapify(v,i,N);
        }
    }
    int maximum(vector<int> &v){
        return v[0];
    }
};

int maxProduct(vector<int>& nums) {
   MaxHeap h;
   h.build_MaxHeap(nums);
   int i= h.extract_Max(nums);
   int j= h.extract_Max(nums);
   int sol = (i-1)*(j-1);
   return sol;
}



