// repeatedly find the minimum element from unsorted array & place it to the beginning
#include <iostream>
using namespace std;
// insertion sort
int main() {
	int arr[]={4,6,2,5,3};
	// 5 3 2 6
	// checks temp=3 ; prev=5;5>3? ; swap them ; arr = {3,5,2,6}
	//cur = 2 ; prev = 
	int n=sizeof(arr)/sizeof(int);
	for(int pos=0;pos<=n-2;pos++){
		int cur = arr[pos];
		int min = pos;
		for(int j=pos;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		
			int temp=arr[pos];
				arr[pos]=arr[min];
				arr[min]=temp;
		
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}