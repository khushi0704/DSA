#include <iostream>
using namespace std;
//subarrays
int subarray(int arr[],int n){
    int prefix[100]={0};
    prefix[0]=arr[0];
	int largest_sum=0;
    for(int i=0;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
	for(int i=0;i<n;i++){ // 1 2 3 4 5
		for(int j=i;j<n;j++){ //i+1 , 1 2 3 4 5
			int subarray_sum=i>0?prefix[j]-prefix[i-1]:prefix[j];
			if(largest_sum<subarray_sum){
				largest_sum=subarray_sum;
			}
		}
	}
	return largest_sum;
}
// print sum of each subarray and find out largest sum
int main() {
	
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	// subarrays = {1,2,3}
	cout<<subarray(arr,n);
	
	return 0;
}