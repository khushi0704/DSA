#include <iostream>
#include <list>
#include <map>
using namespace std;
int main(){
    map<string,list<string>> phonebook;
    phonebook["Khushi"].push_back("6268xxxxxx");
    phonebook["Khushi"].push_back("9714xxxxxx");
    phonebook["Moulik"].push_back("9302xxxxxx");
    phonebook["Moulik"].push_back("7222xxxxxx");
    phonebook["Mumma"].push_back("7000xxxxxx");
    phonebook["Mumma"].push_back("9424xxxxxx");
    phonebook["Papa"].push_back("9479xxxxxx");
    phonebook["Harsh"].push_back("6264xxxxxx");
    for(auto key : phonebook){
        cout<<key.first<<" -> ";
       for(auto numbers : key.second){
       	cout<<numbers<<" ";
       }
       cout<<endl;
    }
    return 0;
}