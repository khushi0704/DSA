#include <iostream>
#include <cstring>
using namespace std;

int main(){
// char[100];
// char[100]={'a','b','c'}; // wrong ~ prints garbage values
char a[]={'a','b','c','0'}; //right
char b[] = "abc"; // automatically adds null
char c[100];
cin>>c; // doesnt read after a space is encountered
cout<<c;
cout<< strlen(b)<<endl; // no. of visible chars
cout<< sizeof(b)<<endl; // has a null by default so.

return 0;
}