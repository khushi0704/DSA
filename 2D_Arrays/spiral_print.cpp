#include <iostream>
using namespace std;
// write a function that takes nxm 2d array  and prints
// the all array elements in siral order strat from top left corner
// goes tright proceeds in a spiral pattern until
// ervey element in visited

void print(int arr[][4],int n,int m){
    
    int startRow = 0;
    int endCol = m-1;
    int endRow = n-1;
    int startCol = 0;

    // Outer loop (traverse array boundary)
    while(startRow<=endRow and startCol<=endCol){
        // start row
        for(int col=startCol ; col<=endCol;col++){
            cout<<arr[startRow][col]<<" ";
        }
        for(int row=startRow+1 ; row<=endRow;row++){
            cout<<arr[row][endCol]<<" ";
        }
        for(int col=endCol-1 ; col>=startCol;col--){
            cout<<arr[endRow][col]<<" ";
        }
        for(int row=endRow-1 ; row>=startRow+1;row--){
            if(startCol==endCol){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }
        startCol++;
        endCol--;
        startRow++;
        endRow--;
    }
}
int main(){

   // boundary approach

   int arr[][4]={
       {1,2,3,4},
       {5,6,7,8},
       {9,10,11,12},
       {13,14,15,16}
   };
    int n=4;
    int m=4;
    print(arr,n,m);
    return 0;
}