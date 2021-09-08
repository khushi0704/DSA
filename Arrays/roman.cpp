#include <iostream>
using namespace std;
void roman(int n){
    int arr[7]={1,5,10,50,100,500,1000};
    string dobby[10] = {"i","v","x","l","d","m"};
    int i=7;
    while(n>0){

        int quo = n/arr[i];
        n = n%arr[i];
        while(quo--){
            cout<<dobby[i];
        }
        i--;
    }
}
int main(){
    roman(7);
}