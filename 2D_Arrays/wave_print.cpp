#include<bits/stdc++.h>
using namespace std;
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector <int> dom;
    // spiral print approach
    int endCol = n-1;
    int startRow=0;
    int endRow=m-1;
    while(startRow>=0 and endCol>=0){
        for(int row=startRow;row<=endRow;row++){
        	int val=arr[row][endCol];
        //	cout<<val<<" ";
           dom.push_back(val);
        }
        --endCol;
        for(int row=endRow;row>=startRow;row--){
        	int val2=arr[row][endCol];
        		//cout<<val2<<" ";
          dom.push_back(val2);
        }
        --endCol;
    }
    return dom;
}
