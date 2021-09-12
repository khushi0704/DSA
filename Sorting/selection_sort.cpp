// repeatedly find the minimum element from unsorted array & place it to the beginning
#include <iostream>
using namespace std;
// insertion sort
int main() {
	int arr[]={4,6,2,5,3};

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