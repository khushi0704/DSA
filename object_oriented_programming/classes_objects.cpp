#include <iostream>
using namespace std;
class Car{

    // data members + data functions
    // private by default
    // properties/attributes
    int price;
    int model_id;
    char name[100];

    // methods
    public:
    void show(){
        cout<<"name : "<<name;
    }

};