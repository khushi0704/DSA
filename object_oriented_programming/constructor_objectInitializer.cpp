#include <iostream>
 
/*
default methods / functions :
     constructor , copy constructor 
     copy assignment operator
     destructor
*/
using namespace std;

// product camera
// product camera

class Product{
   
        string name;
        int id; 
        int selling_price; 
        int mrp;

    public :
    Product(){
        cout<<"constructor called"<<endl;
    }

    Product(int id,string n,int price,int selling_price){
        this->id = id;
        //strcpy(name,n); throwing conversion error
        this->name=n;
        this->mrp=price;
        this->selling_price=selling_price;
    }
        int getMRP(){
            return mrp;
        }

        int getSellingPrice(){
            return selling_price;
        }
};
int main(){
    string n = "khushi";
    Product camera(10101,n,100,100);
    cout<<" product mrp : "<<camera.getMRP()<<"\n selling price : "<<camera.getSellingPrice();
    return 0;
}
