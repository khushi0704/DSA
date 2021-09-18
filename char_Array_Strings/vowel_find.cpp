#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
   
   // return a string containing vowels from S
   int n = S.length();
   string vowel;
   for(int i=0;i<n;i++){
       if(S[i]=='a' or S[i]=='e' or S[i]=='i' or S[i]=='o' or S[i]=='u'){
           vowel+=S[i];
       }
   }
    return vowel;
} 