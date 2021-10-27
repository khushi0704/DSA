#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector <int> arr={1,2,3,4,5};
    // key which is to be searched 
    int key=3;
    
    // it actually gives the address of the bucket 
    // but we want to find the index
    // index = address - baseaddress(arr.begin())
    // this includes the beginning element but excludes the ending one .
  

    // using find and search operator
      vector<int>::iterator it=find(arr.begin(),arr.end(),key);
    if(it!= arr.end()){
        cout<<"present at index : "<<it-arr.begin();
      }
    else{
        cout<<"element not present";
        }
    return 0;
}