#include <iostream>
#include <vector.h> // user defined
using namespace std;

int main(){


    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
    Vector<int> v(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3); 
    v.push_back(4); 
    v.push_back(5); 
    v.pop_back(); 
    cout<<v[3]<<endl;
    cout<<v.front()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.back()<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.isEmpty()<<endl;
    return 0;
}
