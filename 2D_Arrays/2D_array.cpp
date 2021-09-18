#include <iostream>
using namespace std;
void print(int arr[][100],int n,int m){
    // Print
    for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
}
    }
}
int main(){
    // constraints
    int arr[100][100];
    // n rows and m col
    int n,m;
    cin>>n>>m;
    // take input 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // print the array
   print(arr,n,m);
    return 0;
}