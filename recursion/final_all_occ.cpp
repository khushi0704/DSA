#include <iostream>
#include <vector>
using namespace std;
void all_occ(vector<int> v,int i,int key,vector<int> &occ){
    // base case
    if(i==v.size()){
        return;
    }
    if(v[i]==key){
        occ.push_back(i);
    }
    all_occ(v,i+1,key,occ);
}
vector<int> findAllOccurences(int k, vector<int> v){
    vector <int> occ;
    all_occ(v,0,k,occ);
    return occ;
}