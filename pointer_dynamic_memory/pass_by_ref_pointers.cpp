#include <iostream>
using namespace std;
// int * viewsptr = views
void watch_video(int * viewsptr){
    *viewsptr = *viewsptr+1;
}
int main(){
    int views=100;
    cout<<"in main "<<views<<endl;
    watch_video(&views); // passing address of it
    cout<<"in function : "<<views;
}
