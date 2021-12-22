#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count_set=0;
    while(n!=0){
    int last_bit = (n&1);
    count_set+=last_bit;
    n=(n>>1);
    }
    cout<<count_set;
    return 0;
}
