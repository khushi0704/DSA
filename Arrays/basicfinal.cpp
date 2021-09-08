#include <iostream>
using namespace std;
void printArray(int *arr,int n){
    // n must be passed exclusively
    // int arr[] = int *arr[]
   // after the prbm in basicplus , this is the method access arr size 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";  // 1 2 3 4 5
    }

}
using namespace std;
 int main(){
     int arr[5] = {1,2,3,4,5};
     int n = sizeof(arr)/sizeof(int);
    cout<<"value of n in main = "<<n<<"\n"; // 5
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,"; // 1 2 3 4 5
    }
    cout<<endl;
    printArray(arr,n);
     return 0;
 }