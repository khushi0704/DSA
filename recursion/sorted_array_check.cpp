#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    // base case
    if(n==1 or n==0){ // if only one element is left
        return true;
    }
    // rec case
    if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
        return true;
    }
    return false; 
}
bool isSortedTwo(int arr[],int i,int n){
    // base case
    if(i==n-1){ // if only one element is left
        return true;
    }
    // rec case
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSortedTwo(arr,i+1,n); 
}
bool isSortedThree(int arr[],int i,int n){
    // base case
    if(i==n-1){ // if only one element is left
        return true;
    }
    // rec case
    if(arr[i]<arr[i+1] and isSortedThree(arr,i+1,n)){
        return true;
    } 
    return false;
}
int main(){
    int arr[]={1,2,3,4,5,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,n);
    cout<<isSortedTwo(arr,0,n);
    cout<<isSortedThree(arr,0,n);
    return 0;
}