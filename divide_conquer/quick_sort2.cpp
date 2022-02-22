#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr,int s,int e){
	int piv=arr[s];
	int l=s+1;
	int r=e;
	while(l<r){
		while(arr[l]<piv){
			l++;
		}
		while(arr[r]>piv){
			r--;
		}
		if(arr[l]>arr[r]){
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		}
	}
	int tem = arr[r];
	arr[r]=piv;
	piv=tem;
	
	return r;
}
void quick_sort(vector<int> &arr,int s,int e){
	// base
	if(s>=e){
		return;
	}
	// rec
	int pivot = partition(arr,s,e);
	quick_sort(arr,s,pivot);
	quick_sort(arr,pivot+1,e);
}
int main() {
	vector<int> arr={2,3,10,0,1,8,9};
	int n=arr.size();
	quick_sort(arr,0,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}