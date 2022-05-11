#include <iostream> // iostream - input/output stream
using namespace std; // std contains objects cout,cin & more

//linear search is an alogorithm that linearly searches for an element in an array in O(N) time

int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i; // ele found , & its index returned
        }
    }
    return -1; // element not found
}
int main(){
    int arr[]={2,4,7,3,6,7};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
    cout<<" key to be found = "<<key<<endl;
    int index = linear_search(arr,n,key);
    if(index!=-1){
        cout<<"element found at index = "<<index<<endl;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}