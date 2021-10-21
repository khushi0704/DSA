#include <iostream>
using namespace std;
int main(){
    // arr address stored in static and array elements at heap
    int *arr=new int[5];
    cout<<arr; // address of array 
for(int i=0;i<5;i++){
    arr[i]=i;
    cout<<arr[i]<<" ";
}
cout<<endl;
// delete
delete [] arr;
// when we run the delete , the array elements are deleted/gargbage values 
// assigned / overwritten by new elements in heap 
// but we see , we're getting the same address even after we have deleted 
// this is because we deleted elements from heap , but the address is still stored in static memory which
// is deleted only after program execution
 cout<<arr<<endl;
 cout<<arr[2]<<endl;
    return 0;
}