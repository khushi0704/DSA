#include <iostream>
using namespace std;

// an example of pass by value 
void apply_Tax(int income){

    int tax = 0.10;
    income=income-income*tax;

}

// an example of pass by refernce using refernce variable 
void apply_Tax_by_ref(int & money){
    
    float tax = 0.10;
    money=money-money*tax;
}
int main(){

    int income;
    cin>>income;
    // pass by value 
    cout<<" pass by value "<<endl;
    cout<<" income before tax : "<<income<<endl; // 100
    apply_Tax(income);
    cout<<" income after tax : "<<income<<endl; // 100

    // pass by reference 
     cout<<" pass by refernce using ref var "<<endl;
    cout<<" income before tax : "<<income<<endl; // 100
    apply_Tax_by_ref(income);
    cout<<" income after tax : "<<income<<endl; // 90

}