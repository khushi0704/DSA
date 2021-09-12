#include <iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
 int n = sizeof(a)/sizeof(int);
 int k =2;
    while(k!=0){
        // last element comes first and the rest are shifted forward by 1
        int temp = a[n-1];
        for(int i=n-2;i!=-1;i--){
            a[i+1]=a[i];
        }
        a[0]=temp;
        k--;
    }
    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
}