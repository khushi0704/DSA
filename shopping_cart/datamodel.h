#include <string>
#include <unordered_map>
using namespace std;
// three classes 
// Product Item Cart
class Item;
class Cart;

class Product {
    // id name price 
    
    int id;
    string name;
    int price;
    
    // constructor for product creation 
    public:
    Product(){

    }

    Product(int u_id,string name,int price){
        id=u_id;
        this->name=name;
        this->price=price;
    }
    // features 
    string getDisplayname(){
        return name+" : "+to_string(price)+"\n";
    }
    // get short name 
    string getShortName(){
        return name.substr(0,1);
    }
        friend class Item;
        friend class Cart;
};
class Item{
    Product product;
    int quantity;

    public:
    Item(){}
    Item(Product p,int q):product(p),quantity(q){}
    int getItemPrice(){
        return quantity * product.price;
    }
    string getItemInfo(){
        return "Name : "+product.name+" Total Price : "+to_string(quantity*(product.price));
    }
    friend class Cart;
};
class Cart{
    // To Do
    // Data Collection
    unordered_map<int,Item> items;
    // now we need to map 
    // initialize freq by 0;
    public:
    void addProduct(Product product){
        if(items.count(product.id)==0){
            Item newItem(product,1);
            items[product.id] = newItem;
        }
        else{
            items[product.id].quantity += 1;
        }
    }

    int getTotal(){
        //Todo
        int total = 0;
        for(auto itemPair : items){
            auto item = itemPair.second;
            total+= item.getItemPrice();
        }
    return total;
    }
    string viewCart(){
        if(items.empty()){
            return "Cart is empty";
        }

        string itemizedList;
        int cartTotal = getTotal();
        for(auto itemPair : items){
            auto item = itemPair.second;
            itemizedList.append(item.getItemInfo());
        }
        return itemizedList + "\n Total Amount : Rs. " + to_string(cartTotal)+'\n';
    }
    // later on
    bool isEmpty(){
        return items.empty();
    }
};
