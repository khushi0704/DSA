#include <iostream>
#include "hashtable.h"
using namespace std;
int main(){
    HashTable<int> h;
    h.insert("veg-roll",20);
    h.insert("ice-cream",55);
    h.insert("chocolates",30);
    h.insert("orange",30);
   // h.print();
  //  h.erase("apple");
    //h.print();

    h["kiwi"]=100;
    h.print();
   // h["kiwi"]+=10;
    //h["apple"]=110;

    int *price = h.search("orange");
    if(price!=NULL){
        cout<<"Price of orange"<<" is "<<*price<<endl;
    }
    else{
        cout<<"The item is not present in the Menu"<<endl;
    }
    return 0;
}