#include <iostream>
using namespace std;
int main(){
    string s1="malayalam";
    int i=0;
    int j=s1.size()-1;
    cout<<j<<endl;
    int flag=0;
    while(s1[i]==s1[j] && i!=j){
        i++;
        j--;
        if(i==j){
            flag=1;
        }
    }
    if(flag){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}