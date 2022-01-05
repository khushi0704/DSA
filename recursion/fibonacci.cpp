#include <iostream>
using namespace std;
int fib(int n){
    if(n==0 or n==1){
        return n;
    }
    int f1=fib(n-1);
    int f2=fib(n-2);
    return f1+f2;
}
int main(){
    int n=10;
    int i=0;
    while(n!=0){
        cout<<fib(i)<<" ";
        i++;
        n--;
    }
    cout<<fib(2);
    return 0;
}