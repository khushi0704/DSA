#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    // push back
arr.push_back(15);
//pop back
arr.pop_back();

// fill constructor used to initialize
vector<int> arr(10,7);

vector<int> visited(100,0);
    // size of the vector : no. of elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr.size()<<endl;
    // capacity of the vector : actual memory allocated
    cout<<arr.capacity()<<endl;
    return 0;
}