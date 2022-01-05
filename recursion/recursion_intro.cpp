#include <iostream>
using namespace std;
void goHome(x,Home){
    if(x==Home){
        cout<<"reached home";
    }
    x+=1;
    goHome(x,Home);
}
int main(){
    // Main
int x=1;
int Home = 10;
goHome(x,Home);
    return 0;
}


