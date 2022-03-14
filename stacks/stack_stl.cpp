#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> series;
    series.push("peaky blinders");
    series.push("dark");
    series.push("squid game");
    series.push("blah blah");
    while(!series.empty()){
        cout<<series.top()<<endl;
        series.pop();
    }
    return 0;
}