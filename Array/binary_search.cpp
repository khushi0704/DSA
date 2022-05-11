#include <iostream> // iostream - input/output stream
using namespace std; // std contains objects cout,cin & more

//binary search is an alogorithm that keeps on divinding the array into two parts
// until the element is found
// but array must be sorted 

int binary_search(int arr[],int n,int key){
   int s=0; int e=n-1;
    while(s<=e){
        // find mid 
        int mid = s+e/2;
        // compare
        if(key == arr[e]){
            return e;
        }
        // when element less than mid , then decrement e
        else if(key < arr[mid]){
           e--; 
        }
        else{
        s++;
        }
    }
    return -1; // element not found
}
/* ALTERNATIVE APPROACH
int binary_search(int arr[],int n,int key){
   int s=0; int e=n-1;
    while(s<=e){
        // find mid 
        int mid = s+e/2;
        // compare
        if(key == arr[mid]){
            return mid;
        }
        // when element less than mid , then decrement e
        else if(arr[mid]>key){
           e=mid-1; 
        }
        else{
        s=mid+1;
        }
    }
    return -1; // element not found
}
*/
int main(){
    int arr[]={2,4,7,9,12};
    int n = sizeof(arr)/sizeof(int);
    int key=20;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
    cout<<" key to be found = "<<key<<endl;
    int index = binary_search(arr,n,key);
    if(index!=-1){
        cout<<"element found at index = "<<index<<endl;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}