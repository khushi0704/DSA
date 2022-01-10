#include <iostream>
#include <vector>
using namespace std;
void helper(int N,vector<int> &v){
    if(N==0){
        return;
    }
    helper(N-1,v);
    v.push_back(N);
}
vector<int> increasingNumbers(int N) {
    // using recursion
        vector <int> v;
    helper(N,v);
    return v;
}
int main(){
    int n=5;
    vector <int> v;
    increasingNumbers(n);
    for(auto num:v){
        cout<<num<<" ";
    }
    return 0;
}