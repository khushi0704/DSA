#include<bits/stdc++.h>
using namespace std;
// bubble sort - keep sending the largest value towards the end of loop 
// using comparison & swapping until array/vector sorted
vector<int> optimizedBubbleSort(vector<int> v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            // send the greatest no. towards right
            if(v[j]>v[j+1]){
                // swap them
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    return v;
    
}