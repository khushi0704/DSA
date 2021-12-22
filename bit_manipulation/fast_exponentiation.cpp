#include <iostream>
using namespace std;
int fast_Exp(int a,int N){
    int ans=1;
    while(N>0){
        int last_bit=(N&1);
        if(last_bit){
            ans=ans*a;
        }
        a=a*a;
        N=N>>1;
    }
    return ans;
}
int main(){
    cout<<fast_Exp(3,2);
    return 0;
}