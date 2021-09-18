#include <iostream>
#include <vector>
using namespace std;


int compress(vector<char> &chars) {
    	int n=chars.size();
	//create a string s
	string s;
	// iterate over the chars
	for(int i=0;i<n;i++){
		int count=1;
		while(i<n-1 and chars[i+1]==chars[i]){
			count++;
			i++;
		}
		s+=chars[i];
		if(count>1){
        s+= to_string(count); 
			}
	// now modify the input array but passing this string

	}
	chars.clear();
	int m = s.length();
		for(int i=0;i<m;i++){
		//	cout<<s[i]<<" ";
		chars.push_back(s[i]);
	}
	return chars.size();
}