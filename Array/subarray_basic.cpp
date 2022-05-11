#include <iostream>
using namespace std;
//subarrays
void subarray(int arr[],int n){
	int largest_sum=0;
	for(int i=0;i<n;i++){ // 1 2 3 4 5
		for(int j=i;j<n;j++){ //i+1 , 1 2 3 4 5
			int subarray_sum=0;
			for(int k=i;k<=j;k++){ // 1 to 1
				cout<<arr[k]<<",";
				subarray_sum+=arr[k];
			}
			if(largest_sum<subarray_sum){
				largest_sum=subarray_sum;
			}
			cout<<"sum = "<<subarray_sum<<"\n";
		}
	}
	cout<<"largest sum = "<<largest_sum;
}
// print sum of each subarray and find out largest sum
int main() {
	
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	// subarrays = {1,2,3}
	subarray(arr,n);
	
	return 0;
}