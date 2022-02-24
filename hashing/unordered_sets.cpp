#include <iostream>
#include <unordered_set>
using namespace std;
int main(){

    // set is just acollection of keys
    // random number
    // behaves as a hash table internally
    // just storing the keys and not the values
    unordered_set<int> s{1,2,3,4,5,5};

    // deletion :  O(1)
    s.erase(1);
    int key;
    cin>>key;
    // searching : O(1)
    if(s.find(key) != s.end()){
        cout<<key<<"is present"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }

    for(auto numbers : s){
        cout<<numbers<<" ";
    }
    return 0;
}