#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // sorted array 
    int n = A.size();
    for(int i=n-1;i>=0;i--){
        
        // WE NEED TO FIND THE IMMEDIATE EQUAL OR IMMEDIATE SMALLEST AND BREAK THE LOOP
        if(A[i]<=Val){
            return A[i];
        }
    }
    return -1;
}