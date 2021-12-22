#include <bits/stdc++.h>
using namespace std;
class Bit{
    public:
    int bit_and(int a,int b){
        return a&b;
    }
    int bit_or(int a,int b){
        return a|b;
    }
    int bit_xor(int a,int b){
        return a^b;
    }
    int bit_not(int a){
        return ~a;
    }
    int bit_left_shift(int a,int b){
        // multiply
        int result = a*(pow(2,b));
        return a<<b;
    }
    int bit_right_shift(int a,int b){
        // divides
        int result = a/(pow(2,b));
        return a>>b;
    }
};
int main(){
    Bit b;
    int x=5;
    int y=7;
    int z=1;
    b.bit_and(x,y);
    b.bit_or(x,y);
    b.bit_xor(x,y);
    b.bit_left_shift(x,z);
    b.bit_right_shift(x,z);
    b.bit_not(x);
    return 0;
}