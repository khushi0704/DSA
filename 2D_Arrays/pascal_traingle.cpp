#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> pas(n);
    // traveserse throught the row
    for(int i=0;i<n;i++){
        pas[i].resize(i+1);
        // first and last element always equal to 1
        pas[i][0]=pas[i][i]=1;
        // traverse through each column
        for(int j=0;j<i;j++){
          pas[i][j]=pas[i-1][j-1]+pas[i-1][j];  
        }
    }
   return pas; 
}
 



