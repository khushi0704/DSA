#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int binaryToDecimal(string s)
{
    reverse(s.begin(), s.end());
    int n = s.length();
    int decimal=0;
    //convert to decimal 
    for(int i=0;i<n;i++){
        int ia = s[i] - '0';
            int sum=(pow(2,i))*ia;
            decimal+=sum;
    }
    return decimal;
}
 