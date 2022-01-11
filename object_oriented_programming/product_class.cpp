#include <iostream>
using namespace std;

// product camera

class Product{
    public :
        char name[100]; // 100 bytes
        int id; // 4 bytes
        int selling_price; // 4 bytes
        float mrp; // 4 bytes
};
int main(){
    Product camera;
    // size of this class :
    cout<<"Size of this class : "<<sizeof(camera.selling_price);

    // we can access class members only if they are public otherwise not
    camera.mrp = 100;
    camera.selling_price = 200;
    cout<<" price : "<<camera.mrp<<" selling price : "<<camera.selling_price;
    return 0;
}
