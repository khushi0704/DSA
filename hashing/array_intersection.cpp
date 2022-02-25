#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
set<int> ans;
        vector<int> res;
        for(auto i:nums1){
            for(auto j:nums2){
                if(i==j){
                    ans.insert(i);
                }
            }
        }
        for(auto x:ans){
            res.push_back(x);
        }
        return res;
}

