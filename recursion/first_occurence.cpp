#include <iostream>
using namespace std;
// top down approach3
int first_occ(int arr[],int n,int key){
    if(n==0 ){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int subIndex=first_occ(arr+1,n-1,key);
    if(subIndex!=-1){
        return subIndex + 1;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int key=4;
    cout<<first_occ(arr,n,key);
    return 0;
}