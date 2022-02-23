#include <iostream>
#include "hashtable.h"
using namespace std;
int main(){
    HashTable<int> h;
    h.insert("pizza",100);
    h.insert("burger",40);
    h.insert("veg-roll",20);
    h.insert("ice-cream",55);
    h.insert("chocolates",30);
    h.insert("orange",30);
    h.insert("apple",30);
    h.insert("banana",30);
    h.insert("lays",10);
    h.print();
    int *price = h.search("orange");
    if(price!=NULL){
        cout<<"Price of orange"<<" is "<<*price<<endl;
    }
    else{
        cout<<"The item is not present in the Menu"<<endl;
    }
    return 0;
}