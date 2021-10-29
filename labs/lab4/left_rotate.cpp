#include <iostream>
using namespace std;
// Write a C/C++ program to left rotate an array of integers by d times.
int main() {
	int d=2;
	int n=5;
	int arr[n]={1,2,3,4,5};
	while(d!=0){
		int temp=arr[0];
		for(int i=0;i<n;i++){
			arr[i]=arr[i+1];
				// keep swapping adjacent elements
		}
		arr[n-1]=temp;
		d--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}