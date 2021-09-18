#include <bits/stdc++.h>
using namespace std;

// returning the updated string
string removeDuplicate(string s){
    int n = s.length();
	string a;
    sort(s.begin(), s.end()); // O(nlogn)
	for(int i=0;i<n;i++){
		while(i!=n-1 and s[i+1]==s[i]){ // while there are duplicate elements
			i++;
		}
		a+=s[i]; //appends chars of string s to string a
		
	}
	int m=a.length();
	s.erase(); // size becomes 0
	for(int i=0;i<m;i++){
	    s+=a[i]; // appends chars to string s
	}
    return s;
    
}

// Method 2 - using another string
string removeDuplicate(string s){
    int n = s.length();
	string a;
    sort(s.begin(), s.end());
	for(int i=0;i<n;i++){
		while(i!=n-1 and s[i+1]==s[i]){
			i++;
		}
		a+=s[i];
		
	}
   return a;
   
}