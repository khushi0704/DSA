#include <iostream>
#include <vector>
using namespace std;
class Bit_Mani{
    public:
    int get_ith_bit(int n,int i){
        int mask=(1<<i);
        return (n&mask)>0?1:0;
    }
    int clear_ith_bit(int n,int i){
        int mask=~(1<<i);
        n=n&mask; // 1 will change to 0 and 0 remains 0
        return n;
    }
    int set_ith_bit(int n,int i){
        int mask=(1<<i);
        n=n|mask; // 1 will change to 0 and 0 remains 0
        return n; 
    }
    int update_ith_bit(int n,int i,int v){
        clear_ith_bit(n,i);
        int mask=(v<<i);
        n = n|mask;
        return n;
    }
    void bin_repr(int n){
        vector<int> v;
        while(n!=0){
            v.push_back(n%2);
            n=n/2;
        }
        for(int i=v.size()-1;i>=0;i--){
        	cout<<v[i];
        }
    }
};
int main(){

    Bit_Mani bit;
    int n=5;
    int i=2;
    int v=1;
    cout<<"n: "<<n<<" ,i: "<<i<<" ,v : "<<v<<endl;
    cout<<"binary representation : "<<endl;
    bit.bin_repr(n);
    cout<<endl;
    cout<<bit.get_ith_bit(n,i)<<endl;
    cout<<bit.set_ith_bit(n,i)<<endl;
    cout<<bit.clear_ith_bit(n,i)<<endl;
    cout<<bit.update_ith_bit(n,i,v)<<endl;
    return 0;

}
