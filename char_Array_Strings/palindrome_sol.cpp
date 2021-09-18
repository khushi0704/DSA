#include <iostream>
using namespace std;
bool isPalindrome(string str){
    int n=str.length();
    string str2=str;
    for(int i=0;i<n;i++){
    	str2[i]=str[n-i-1];
    }
    int k= str.compare(str2);
 
    if(k==0){
    return true;
    }
    return false;
 
}
int main(){
    string str="mome";
    cout<<isPalindrome(str);
    return 0;
}