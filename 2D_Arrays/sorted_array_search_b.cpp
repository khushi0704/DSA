#include <iostream>
using namespace std;
void SearchBrute(int arr[][4],int row,int col,int key){
    // brute force / linear Search
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                // return index
                cout<<"key found at position : ["<<i<<","<<j<<"]";
                break;
            }
        }
    }
}
int main(){
    // write a fun that searches for an element
    // in row wise and column wise sorted 2D array

    // brute force approach
    int arr[][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50},
    };
    int n=4;
    int m=4;
    int key=35;
    SearchBrute(arr,n,m,key);
 
    // to print the 2D array : 

    /*

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    */
    return 0;
}