#include <iostream>
using namespace std;

// product camera

class Product{
   
        char name[100];
        int id; 
        int selling_price; 
        int mrp;

    public :

        void setMRP(int price){
            mrp = price;
        }

        void setSellingPrice(int price){
            (price<=mrp)?selling_price = price : selling_price = mrp;
        }
        int getMRP(){
            return mrp;
        }

        int getSellingPrice(){
            return selling_price;
        }
};
int main(){
    Product camera;
    // we can access class members only if they are public otherwise not
    
    //selling price <= mrp

    camera.setMRP(100);
    camera.setSellingPrice(200);
    cout<<" MRP : "<<camera.getMRP()<<" selling price : "<<camera.getSellingPrice();
    
    // conditional access
    
    return 0;
}
