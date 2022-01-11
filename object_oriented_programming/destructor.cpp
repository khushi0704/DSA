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
   
        char *name;
        int id; 
        int selling_price; 
        int mrp;

    public :
    Product(){
        cout<<"constructor called"<<endl;
    }

    Product(int id,char *n,int price,int selling_price){
        this->id = id;\
        name = new char[strlen(n)+1];
        strcpy(name,n);
        this->mrp=price;
        this->selling_price=selling_price;
    }

    Product(Product &X){
        // garbage values will be printed if this block is empty
    name = new char[strlen(X.name)+1];
    strcpy(name,X.name);
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
    void setName(char *name){
        strcpy(this->name,name);
    }
    // called automatically
    ~Product(){
        cout<<"deleting..."<<name<<endl;
    if(name!=NULL){
        delete [] name;
        name=NULL;
    } 
    }
};
int main(){
    Product camera(10101,"RealMe",100,100);
    Product old_camera;
    old_camera = camera;
    old_camera.setName("GoProBold");
    camera.showDetails();
    old_camera.showDetails();
    return 0;
}
