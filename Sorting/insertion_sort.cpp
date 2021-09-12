//similar to playing cards in our hands
// insert the card in its correct position in sorted part
#include <iostream>
using namespace std;
// insertion sort
int main() {
	int arr[]={-1,-2,-3,-4};
	// 5 3 2 6
	// checks temp=3 ; prev=5;5>3? ; swap them ; arr = {3,5,2,6}
	//cur = 2 ; prev = 
	int n=sizeof(arr)/sizeof(int);
	for(int i=1;i<=n-1;i++){
		int current = arr[i];
		int prev = i-1;
		while(prev>=0 && arr[prev]>current){
			arr[prev+1]=arr[prev];
		//	arr[prev]=current; this also works
			prev-=1;
		}
			arr[prev+1]=current;
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}