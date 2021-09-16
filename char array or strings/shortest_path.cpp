#include <iostream>
using namespace std;
int main(){
    char path[1000];
    cin.getline(path,1000);
    int x=0;
    int y=0;

    for(int i=0;path[i]!='\0';i++){
        switch (path[i]){
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
            case 'E':
                x++;
                break;
        }
    }
    if(x>=0 and y>=0){
        // both x & y positive 
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"N";
        }
    }
    else if(x<=0 and y<=0){
        // both x & y negative 
        while(x++){
            cout<<"W";
        }
        while(y++){
            cout<<"S";
        }
    }
    else if(x>=0 and y<=0){
        //  y negative & x positive 
        while(x--){
            cout<<"E";
        }
        while(y++){
            cout<<"S";
        }
    }
    else if(x<=0 and y>=0){
        //  x negative & y positive 
        while(x++){
            cout<<"W";
        }
        while(y--){
            cout<<"N";
        }
    }
    return 0;
}