#include <iostream>
using namespace std;
int main(){
    // reverse elements of an array
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }
    return 0;
}