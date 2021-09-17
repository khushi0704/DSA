#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    // string class
    // offers less flexibility since size of char array has to be fixed
    // char s[1000]={'1','2','3','a','\0'};
   string s;//="hello world"; //dynamic array, size can be changed at runtime

    int n=5;
    // by default a string terminates at a new line
    vector <string> sarr;
    string temp;
    while(n--){
        getline(cin,temp,' ');
        sarr.push_back(temp);
    }
for( string x: sarr){
    cout<<x<<" ";
}
/*
   getline(cin,s,'.');
    // iterate over each char of string.    
   for(char ch : s){
    cout<<ch<<",";
   }    
    cout<<s<<endl;
*/
    return 0;
}