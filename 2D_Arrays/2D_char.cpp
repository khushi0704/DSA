#include <iostream>
using namespace std;
int main(){
    char numbers[][10]={
        "one",
        "two",
        "three",
        "four",
        "forty",
        "hundred",
    };
    for(int i=0;i<6;i++){
        cout<<numbers[i]<<endl;
    }
// cout treats char arrays differently
    return 0;
}