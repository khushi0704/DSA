#include <iostream>
using namespace std;
// top down and bottom up
int i=0;
void print_rec_desc(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print_rec_desc(n-1);
}
void print_rec_inc(int n){
    if(n==0){
        return;
    }
    print_rec_inc(n-1);
    cout<<n<<" ";
}
// important concept of recursion
void print_rec_asc(int n){
    i=i+1;
    if(i==n+1){
        return;
    }
    cout<<i<<" "; // just swapping the order of thee two statements changes the call stack
    print_rec_asc(n);
}
int main(){
    print_rec_desc(10);
    cout<<endl;
    print_rec_inc(10);
    cout<<endl;
    print_rec_asc(10);
    return 0;
}