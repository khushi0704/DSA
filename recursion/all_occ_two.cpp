#include <iostream>
#include <vector>
using namespace std;
 
void helper(int k, vector<int> v, int i, vector<int> &ind){
    if(i==v.size()){
        return;
    }
    if(v[i]==k){
        ind.push_back(i);
    }
    helper(k,v,i+1,ind);
}
 
vector<int> findAllOccurences(int k, vector<int> v){
    vector<int> ind;
    helper(k,v,0,ind);
    return ind;
    
}