#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[1000]="apple";
    char b[1000];
    // strlen
    cout<< strlen(a) <<endl;
      // strcpy
strcpy(b,a);
cout<<b<<endl;
    
    // strcmp

    cout<<strcmp(a,b)<<endl;

    // strcat

    char web[]="www.";
    char domain[]="khushijain.com";
      
    cout<<strcat(web,domain)<<endl;
  
    strcmp(b,strcat(web,domain));

    //strcmp - 0,-1,1three directions it has
    cout<<b;
    return 0;
}