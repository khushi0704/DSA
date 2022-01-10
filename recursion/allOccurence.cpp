#include <bits/stdc++.h>
using namespace std;
int i=0;
// top down approach3
int all_occ(int arr[],int n,int key,vector<int> &occ){
    // base case
    if(n==0){
        return -1;
    }
    if(*arr==key){
        occ.push_back(i);
    }
    i++;
    return all_occ(arr+1,n-1,key,occ);
}

void findAllOccurences(int k, vector<int> v){
    int n=v.size();
    int arr[n];
    for(int i=0;i<v.size();i++){
        arr[i]=v[i];
    }
    
    vector <int> occ;
        all_occ(arr,n,k,occ);
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