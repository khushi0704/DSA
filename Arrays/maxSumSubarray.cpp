#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
   // using kadane's algo
    int max=0;
    int cur=0;
    int flag=0;
    int n = A.size();
    for(int j=0;j<n;j++){
    	if(A[j]<0){
    		flag++;
    	}
    }
    if(flag==n){
        max=-1;
    for(int k=0;k<n;k++){
       if(A[k]>=max){
       	max=A[k];
       }
	}
    }
	else{
    for(int i=0;i<n;i++){
        cur+=A[i];
        if(cur<0){
            cur=0;
    }
    if(cur>max){
        max=cur;
    }
    }
	}
   return max; 
}
int main(){
	vector <int> A={-1,-2,-3,-4,-5};
	cout<<maxSumSubarray(A);
	return 0;
}