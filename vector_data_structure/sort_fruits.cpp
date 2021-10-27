#include<bits/stdc++.h>
using namespace std;
bool sortbyname(pair<string,int> v1,pair<string,int> v2){
   return v1.first<v2.first;
}
bool sortbyprice(pair<string,int> v1,pair<string,int> v2){
   return v1.second<v2.second;
}
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    if (S =="name"){
    sort(v.begin(),v.end(),sortbyname);
    }
    else{
     sort(v.begin(),v.end(),sortbyprice);
    }
    return v;
}