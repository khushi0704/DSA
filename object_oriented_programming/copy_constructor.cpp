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
          this->name=n;
        this->mrp=price;
        this->selling_price=selling_price;
    }

    Product(Product &X){
        // garbage values will be printed if this block is empty
    
    id = X.id;
    // we'll not be copying name , theres a different concept for it
    mrp=X.mrp;
    selling_price=X.selling_price;
    
    
    }
    void showDetails(){
        cout<<"id : "<<id<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"MRP : "<<mrp<<endl;
        cout<<"Selling Price : "<<selling_price<<endl;
        cout<<"---------------------------"<<endl;
    }
};
int main(){
    Product camera(10101,"RealMe",100,100);
    // copy is made using a special constructor
    Product webcam(camera);
    Product handycam = camera;
    camera.showDetails();
    webcam.showDetails();
    handycam.showDetails();
    return 0;
}
