#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a,int b){
	// if we chnage this to a<b , arr will be sorted in increasing order
	return a>b;
}
void bubble_sort(int v[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
           if(compare(v[j],v[j+1])){
           	swap(v[j],v[j+1]);
           }
        }
    }
}
int main() {
	int arr[]={8,4,6,2,7,4,2,1};
	int n = sizeof(arr)/sizeof(int);
	// inbuilt sort
	// compare is not a function call , bc we always use brackets for fun call
	//  but we are passing fun as a parameter to another function
	//sort(arr,arr+n,compare);
	bubble_sort(arr,n);
		for(auto x: arr){
		cout<<x<<" ,"; // output - 1 2 2 4 4 6 7 8
	}
	// to get array in the reverse order
	// sort(arr,arr+n,greater <int>);
	
	// another method - reverse sort
	
/*	reverse(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "; // output - 8 7 6 4 4 2 2 1
	}
	*/

	return 0;
}