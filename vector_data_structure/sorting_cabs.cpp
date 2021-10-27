#include<bits/stdc++.h>
#include <vector>
using namespace std;
bool compare(pair<int,int> v1,pair<int,int> v2){
    int d1=(v1.first*v1.first)+(v1.second*v1.second);
    int d2=(v2.first*v2.first)+(v2.second*v2.second);
    return d1<d2;
}
vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
   
   // using distance formula
   sort(v.begin(),v.end(),compare);
   return v;  
}
