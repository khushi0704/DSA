#include <iostream>
using namespace std;
int power(int n,int a){
    if(a==0){
        return 1;
    }
    return n*(power(n,a-1));
}
int main(){
    int n=3;
    int p=3;
    cout<<power(n,p);
    return 0;
}