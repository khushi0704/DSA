#include <iostream>
#include <vector>
#include "datamodel.h"
using namespace std;
    vector<Product> allProducts={
    Product(01,"FashWash",100),
    Product(02,"Shampoo",200),
    Product(03,"Lofa",50),
    Product(04,"Makeup",500),
    Product(05,"Pouch",300),
    };
Product* chooseProducts(){
    string ProductList;
    cout<<" Available Products : "<<endl;
    for(auto product: allProducts){
        ProductList.append(product.getDisplayname());
    }
    cout<<ProductList;
    cout<<" Choose : "<<endl;
    string choice;
    cin>>choice;
    // we need to search user choice in our array
    for(int i=0;i<allProducts.size();i++){
        if(allProducts[i].getShortName()==choice){
            return &allProducts[i];
        }
    }
    // if it is not found
    cout<<"Product not found !"<<endl;
    return NULL;
}
bool checkout(Cart &cart){
	if(cart.isEmpty()){
		return false;
	}

	int total = cart.getTotal();
	cout<<"Pay in Cash";

	int paid;
	cin>> paid;

	if(paid>=total){
		cout<<"Change " <<paid - total << endl;
		cout<<"Thank you for shopping!";
		return true;
	}

	else{
		cout<<"Not enough cash!";
		return false;
	}

}
int main(){
    char action;
    Cart cart;
    while(true){
        cout<<" Select an action : (a)dd item (v)iew cart (c)checkout"<<endl;
        cin>>action;
        if(action=='a'){
            // Todo : AddCart
            // View All Products + Choose Products + Add to cart
            Product *product = chooseProducts();
            if(product != NULL){
                cout<<" Added to the Cart"<<product->getDisplayname();
                cart.addProduct(*product);
            }
        }
    else if(action=='v'){
			// View the Cart
			cout<<"------------------" <<endl;
			cout << cart.viewCart();
			cout<<"------------------"<<endl;
		}
		else{
			// Checkout 
			cart.viewCart();
			if(checkout(cart)){
				break;
			}
		}
    }
    return 0;
}