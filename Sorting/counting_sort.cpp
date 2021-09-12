#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	// counting sort
	
	int arr[]={8,3,2,1,1};
	int n=sizeof(arr)/sizeof(int);
	int max=0;
	// find largest element
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	vector <int> freq(max+1,0); // runtime error when using arrays
	
	// update the freq array with freq with those elements
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	//cout<<freq[i]<<" "; 0 0 1 1 0
	}
	
	// put back the sorted indeices into original array
	
	// 0 2 1 1 0 0 0 0 1
	int j=0;
	for(int i=0;i<=max;i++){
		while(freq[i]>0){
			arr[j]=i;
			freq[i]--;
			j++;
		}
	}
	
	
	//cout<<endl;
	// 0 2 1 1 1
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}