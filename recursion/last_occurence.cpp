#include <iostream>
using namespace std;
// bottom up approach
int last_occ(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    int subIndex = last_occ(arr+1,n-1,key);
    if(subIndex == -1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return subIndex+1;
    }
}
int main(){
    int arr[]={1,2,3,7,5,7,0};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    cout<<last_occ(arr,n,key);
    return 0;
}