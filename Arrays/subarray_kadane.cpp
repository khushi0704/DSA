#include <iostream>
using namespace std;
//subarrays
int subarray(int arr[],int n){
   int cur_sum=0;
   int max=0;
   for(int i=0;i<n;i++){
   	cur_sum+=arr[i];
   	if(cur_sum<0){
   		cur_sum=0;
   	}
   	if(cur_sum>max){
   		max=cur_sum;
   	}
   }
	return max;
}
// print sum of each subarray and find out largest sum
int main() {
	
	int arr[]={-2,3,4,-1,5,-12,6,1,3};
	int n=sizeof(arr)/sizeof(int);
	// subarrays = {1,2,3}
	cout<<subarray(arr,n);
	
	return 0;
}