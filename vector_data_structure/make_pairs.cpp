#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
int rel=0;
   int ler=0;
   int p = 0;
   int q = arr.size()-1;
   while(p<q){
       if(arr[p]+arr[q]<=x){
           rel=p;
           ler=q;
           p++;
       }
       else{
           q--;
       }
   }
   return make_pair(arr[rel],arr[ler]);
}