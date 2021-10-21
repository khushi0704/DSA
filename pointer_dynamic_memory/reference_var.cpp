#include <iostream>
using namespace std;
int main(){
    // pass objects by reference
    // 1) pointers 2) reference variable
    int x=10;
    int &y=x;
    x++;
    cout<<x<<" "<<y;

    //reference var - &
    

    return 0;
}