#include <iostream>
#include <cstring>
using namespace std;

// problem - read N strings and print the largest string.Each string can have upto 1000 chars

int main(){
    int n;
    char max;
    char temp[1000];
    int largest=0;
    cout<<"enter number of strings : "<<endl;
    cin>>n;
    while(n--){
        cin.getline(temp,1000,'.');
        int maximum= strlen(temp);
        if(largest<maximum){
            largest=maximum;
            max=cin.getline(temp,1000);
        }
    }
    cout<<" largest string : "<<max<<" with length :"<<largest;
    return 0;
}