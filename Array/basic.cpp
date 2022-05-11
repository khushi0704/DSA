#include <iostream>
using namespace std;
 int main(){
    // arrays are set/collection of similar data items 

    // garbage v/s null 
    // here ar of size 100 is there but only 4 elements ae stored 
    // so the rest 96 are stored as garbage values 
     int ar[100] = {2,4,6,8};
       int arn = sizeof(ar)/sizeof(int);
    for(int i=0;i<arn;i++){
        cout<<ar[i]<<" ,";
    }
    cout<<endl;
    // to eliminate garbage values , we use initialization to store them as null for ex
    
  //  int gar[100];
    int gar[100]={0};
   // int gar[100]={2,3,4,5};
      int garn = sizeof(gar)/sizeof(int);
    for(int i=0;i<garn;i++){
        cout<<gar[i]<<" ,";
    }
     cout<<endl;
     int arr[5] = {1,2,3,4,5};
     // to find size of the arra
     int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
     return 0;

 }