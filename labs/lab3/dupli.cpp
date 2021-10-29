#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "test string";
 //   string a=str;
    int n=str.length();
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++){
    		int count=1;
    		while(i!=n-1 and str[i+1]==str[i]){
    			i++;
    			count++;
    		}
    		if(count>1){
    			cout<<str[i]<<" "<<count<<" ";
    		}
    	
    }
  return 0;
}