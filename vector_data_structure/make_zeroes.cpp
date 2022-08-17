#include<bits/stdc++.h>
using namespace std;
void fun(vector<vector<int>>& arr,int i,int j,int n){
    for(int k=0;k<n;k++){
        for(int m=0;m<n;m++){
            if(k==i or m==j){
                arr[k][m]=-1;
            }
        }
    }
}
vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                // make all the elements of this row & col 0
                fun(arr,i,j,n);
            }
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            if(arr[i][j]==-1){
                // make all the elements of this row & col 0
                arr[i][j]=0;
            }
        }
    }
    return arr;
}