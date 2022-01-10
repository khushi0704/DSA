#include <iostream>
#include <vector>
using namespace std;
int i=0;
// top down approach3
int all_occ(vector<int> v,int n,int key,vector<int> &occ){
    // base case
    if(i==v.size()){
        return -1;
    }
    if(v[i]==key){
        occ.push_back(i);
    }
    i++;
    return all_occ(v,n-1,key,occ);
}

void findAllOccurences(int k, vector<int> v){
    int n=v.size();
    vector <int> occ;
    all_occ(v,n,k,occ);
     for(int i=0;i<occ.size();i++){
         cout<<occ[i]<<" ";
     }   
}
int main(){
    vector<int> v={1,2,5,3,1,2,3,8,6,3,6,7,9};
    int k=3;
    findAllOccurences(k,v);
    return 0;
}