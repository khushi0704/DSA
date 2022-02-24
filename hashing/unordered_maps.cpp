#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> menu;
    menu["pizza"]=100;
    menu["burger"]=40;
    menu["ice-cream"]=100;
    menu["kurkure"]=10;
    menu["cutlet"]=20;
    menu["biryani"]=120;
    string item;
    cin>>item;
    if(menu.count(item)){
        cout<<item<<" is avaiable and its cost is "<<menu[item]<<endl;
    }
    else{
        cout<<" The item is not availabe in the menu "<<endl;
    }
    menu.erase("pizza");
    // we can iterate over all the key value pairs that are there in the unordered maps
    for(pair<string,int> item : menu){
        cout<<item.first<<" - "<<item.second<<endl;
    }
    return 0;
}
