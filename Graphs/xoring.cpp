#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
  sort(v.begin(), v.end());
  // 1 1 2 2 3 3 4 
  int i=0;
  int j=i+1;
  while(!(j==v.size()-1)){
      if(v[i]^v[j]){
          return v[i];
          break;
      }
          i+=2;
          j+=2;
  }
}
int main(){
    vector<int> v={1,2,3,1,4,2,3};
    cout<<xoring(v);
    return 0;
}