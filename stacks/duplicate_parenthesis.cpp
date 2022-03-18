#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    stack<char> s;
        if (str.length() <= 3) {
        return false;
    }
    for(int i=0;i<str.size();i++){
        if(str[i] != ')'){
            s.push(str[i]);
        }
        else{
            //its a closing bracket
            if(s.top() == '('){
                return true;
            }
            else{
                while(s.top() != '('){
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return false;
}