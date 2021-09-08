#include <iostream>
using namespace std;
void printArray(int arr[]){
    int n = sizeof(arr)/sizeof(int);
    cout<<"value of n in function = "<<n<<"\n"; // 2 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";  // 1 2
        //runs only 2 times since n=2 here
    }
    //this function aint able to look at 
    //the memory space of array which is passed as reference
}
using namespace std;
 int main(){
     int arr[5] = {1,2,3,4,5};
     int n = sizeof(arr)/sizeof(int);
    cout<<"value of n in main = "<<n<<"\n"; // 5
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,"; // 1 2 3 4 5
    }
    printArray(arr);
     return 0;
 }