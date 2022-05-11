#include <iostream>
using namespace std;
// printing pairs - two nested loops
void pairs(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			cout<<"("<<arr[i]<<","<<arr[j]<<")";
		}
		cout<<endl;
	}
	/*for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){ // to get all possible pairs
			cout<<"("<<arr[i]<<","<<arr[j]<<")";
		}
		cout<<endl;
	}*/
}
int main() {
	int arr[6]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(int);
	pairs(arr,n);
	
	
	return 0;
}