#include <iostream>
using namespace std;
int** create2DArray(int rows,int cols){
        
    int** arr= new int*[rows];// stores address of array of pointers
    // each row/bucket wil be of type int*
    int value=0;
    // go to each row and allocate a new array
    for(int i=0;i<rows;i++){
        arr[i]=new int[cols];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=value;
            value++; 
        }
    }
    return arr;
}
// even if the func call is over , we can still access these
// elements inside the main function unless we delete that array
int main(){
   int rows=4,cols=3;
   int **arr = create2DArray(rows,cols);
   for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           cout<<arr[i][j]<<" ";
       }
   }
    
    return 0;
}