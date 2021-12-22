#include <iostream>
#include <vector>
using namespace std;
class Bit_Mani{
    public:
    void get_ith_bit(int &n,int i){
        int mask=(1<<i);
      //  return (n&mask)>0?1:0;
    }
    void clear_ith_bit(int &n,int i){
        int mask=~(1<<i);
        n=n&mask; // 1 will change to 0 and 0 remains 0
     //   return n;
    }
    void set_ith_bit(int &n,int i){
        int mask=(1<<i);
        n=n|mask; // 1 will change to 0 and 0 remains 0
     //   return n; 
    }
    void update_ith_bit(int &n,int i,int v){
        clear_ith_bit(n,i);
        int mask=(v<<i);
        n = n|mask;
       // return n;
    }
    void clear_ibits(int &n,int i){
        int mask=(-1<<i);
        n = n|mask;
       // return n;
    }
    void clear_BitsInRange(int &n,int i,int j){
        int a=(-1<<(j+1));
        int b=(1<<i)-1;
        int mask=a|b;
        n = n&mask;
        //return n;
    }
    void replace_bits(int &n,int i,int j,int m){
        clear_BitsInRange(n,i,j);
        int mask = m<<i;
        n = n| mask;
    }
    void bin_repr(int &n){
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
 // we'll pass the value by reference usng &n in functions so that the changes
 // are reflected in actual number
    Bit_Mani bit;
    int n=15;
    int i=1;
   // int v=1;
    int j=3;
    int m=2;
    /*
    cout<<"n: "<<n<<" ,i: "<<i<<" ,v : "<<v<<endl;
    cout<<"binary representation : "<<endl;
   bit.bin_repr(n);
    cout<<endl;
    cout<<bit.get_ith_bit(n,i)<<endl;
    cout<<bit.set_ith_bit(n,i)<<endl;
    cout<<bit.clear_ith_bit(n,i)<<endl;
    cout<<bit.update_ith_bit(n,i,v)<<endl;
    cout<<bit.clear_ibits(n,i)<<endl;
  
    cout<<bit.clear_BitsInRange(n,i,j);
      */
     bit.replace_bits(n,i,j,m);
     cout<<n<<endl;
    return 0;

}
