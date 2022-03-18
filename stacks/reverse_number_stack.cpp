#include <bits/stdc++.h>
using namespace std;
stack<int> s;
void push_digits(int n){
    while(n!=0){
    int rem = n%10;
    s.push(rem);
    n=n/10;
    }
}
int reverse(int n){
    push_digits(n);
    int rev=0;
    int p=1;
    while(!s.empty()){
        int rem = s.top();
        s.pop();
        rev+=(rem*p);
        p*=10;
    }
   return rev; 	
}