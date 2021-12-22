#include <iostream>
using namespace std;
int main(){
    // power of two
    int n;
    cin>>n;
    if((n & (n-1)) == 0){
        cout<<"power of two";
    }
    else{
        cout<<"not a power of two";
    }
    return 0;
}