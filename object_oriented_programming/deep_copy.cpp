#include <iostream>
using namespace std;
class Product{
        char *name; //dynamically allocated
        int id; 
        int selling_price; 
        int mrp;

    public :
    Product(){
        cout<<"constructor called"<<endl;
    }

    Product(int id,char *n,int price,int selling_price){
        this->id = id;
        this->name=new char(strlen(n)+1);
        strcpy(name,n);
        this->mrp=price;
        this->selling_price=selling_price;
    }  
    Product(Product &X){
        id = X.id;
        this->name=new char(strlen(X.name)+1);
        strcpy(name,X.name);
        mrp=X.mrp;
        selling_price=X.selling_price;
    }
    void setPrice(int p){
        this->mrp=p;
    }
    void setName(char *n){
        strcpy(this->name,n);
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
    Product camera(10101,"RealMe",10000,100);
    Product old_camera(camera);
    // set name & price for the old camera
    old_camera.setName("RealMe0");
    old_camera.setPrice(5000);
    old_camera.showDetails();
    camera.showDetails();
    return 0;
}
