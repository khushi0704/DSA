#include <iostream>
using namespace std;
// Write a C program to reverse the elements of an array.
int main() {
	int n=5;
	int arr[n]={1,2,3,4,5};
	int mid=n/2;
	for(int i=0;i<mid;i++){
		int temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}