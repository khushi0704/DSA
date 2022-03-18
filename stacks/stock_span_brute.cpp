#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector <int> s ={100,80,60,70,60,75,85};
    vector<int> stocks;
    stocks.push_back(0);
    // brute force
    for(int i=0;i<s.size();i++){
        for(int j=i-1;j>=0;j--){
            // we have to reverse back 
            if(s[j]>s[i]){
                // subtract index
                stocks.push_back(i-j);
                break;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<stocks.size();i++){
        cout<<stocks[i]<<" ";
    }
    return 0;
}