#include <iostream>
#include <vector>
using namespace std;
int i=0;
// top down approach3
int all_occ(int arr[],int n,int key,vector<int> &v){
    
    // base case
    if(n==0){
        return -1;
    }
    if(*arr==key){
        v.push_back(i);
    }
    i++;
    return all_occ(arr+1,n-1,key,v);
}
int main(){ 
    int arr[]={1,2,5,3,1,2,3,8,6,3,6,7,9};
    vector<int> v;
    int n=sizeof(arr)/sizeof(int);
    int key=3;
    all_occ(arr,n,key,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}