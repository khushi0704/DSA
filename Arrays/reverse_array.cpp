#include <iostream>
using namespace std;
// reversing an array
void reverse(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		int tem = arr[s];
			arr[s]=arr[e];
			arr[e]=tem;
			s++;
			e--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
/* approach 2 : brute force 
void reverse(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			//swap
			int tem = arr[i];
			arr[i]=arr[j];
			arr[j]=tem;
		}
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
*/
int main() {
	int arr[5]={1,2,3,4,5};
	reverse(arr,5);
	return 0;
}