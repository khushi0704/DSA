#include <iostream>
using namespace std;
// sorted pair sum 
int main() {
	int arr[]={10,22,28,29,30,34};
	int x=54;
int max=0;
	int rel=0;
	int ler=0;
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){ 
		int sum=arr[i]+arr[j];
		if(sum<=x && sum>max){
			max=sum;
			rel=arr[i];
			ler=arr[j];
				
		}
        }
	}
	cout<<rel<<" "<<ler;
	return 0;
}