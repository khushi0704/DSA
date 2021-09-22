#include <iostream>
using namespace std;

// stair case approach 

pair <int,int> stairCaseSearch(int arr[][4],int row,int col,int key){
    if(key<arr[0][0] or key>arr[row-1][col-1]){
        return {-1,-1};
    }
    int i=0;
    int j=col-1;
    while(j>=0 and i<=row-1){
        if(arr[i][j]==key){
            return {i,j};
        }
        else if(key>arr[i][j]){
            i++;
        }
        else{
            j--;
        }
    }
return {-1,-1};

}
int main(){

    // passing a 2d array
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {14,15,16,17},
    };
    int n=4;
    int m=4;
    int key = 16;
    pair <int,int> coord = stairCaseSearch(arr,n,m,key);
    cout<<coord.first<<" "<<coord.second;
    return 0;
}