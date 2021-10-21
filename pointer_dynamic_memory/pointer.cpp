#include <iostream>
using namespace std;
int main(){
    // a pointer is a variable that
    // holds the address of another variable
    int x=10;
    float y=5.5;
    cout<< &x<<endl;
    int *xptr = &x;
    cout<< xptr; 
    cout<<&xptr;
    // pointer to a pointer

    int **xxptr = &xptr;
    cout<<xxptr<<endl;
    cout<<&xxptr<<endl;

    return 0;

}