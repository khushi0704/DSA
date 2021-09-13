#include <iostream>
#include <vector>
using namespace std;
int maximum(vector<int> arr, int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int pairSticks(vector<int> length, int D)
{
   	int n=length.size();
   	int count=0;
	   // maximum / largest element in the original array/vector
	int max=maximum(length,n);
	// counting sort 
    vector <int> freq(max+1,0);  // using arrays won't work - wrong output 
    for(int i=0;i<n;i++){ 
    	freq[length[i]]++; 
    }
    int j=0;
    for(int i=0;i<=max;i++){ // 0 1 0 2 1 0 0 0 0 1
    	if(freq[i]>0){ // 1 2 1 1 
    		length[j]=i;
    		j++; // stores the count of numbers
    	}
    }
	// taking out differences of pairs using nested loops
     for(int k=0;k<j;k++){
     	for(int m=k+1;m<j;m++){
			 int diff = length[k]-length[m];
			 diff=(diff>0)?diff:(-diff);
			 if(diff<=D){
			 	count++;
			 }
		 }
     }
    return count;
}