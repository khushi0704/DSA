#include <iostream>
#include <vector>
using namespace std;

void sortingWithComparator(vector<int> a, bool flag){
    
    // sorting techniques - bubble , selection , counting , insertion sort
     // insertion sort// 5 4 3 2 1
    int n = a.size();
   if(flag){
     for(int i=1;i<n;i++){
          int current = a[i];
            int prev = i-1; // will store indices of previous elements
            while(prev>=0 && a[prev]>current){
                a[prev+1]=a[prev];
                prev--;
            }
            a[prev+1]=current;
     }
   }
   else{
       for(int i=1;i<n;i++){
          int current = a[i];
            int prev = i-1; // will store indices of previous elements
            while(prev>=0 && a[prev]<current){
                a[prev+1]=a[prev];
                prev--;
            }
            a[prev+1]=current;
     }
       
   }
   
    
}
int main() {
	vector <int> arr={5,4,3,2,1};
	sortingWithComparator(arr, 1);
	return 0;
}