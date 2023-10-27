#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        recur(temp,1,k,n);
        return ans;      
    }

    void recur(vector<int>&ds,int cnum,int k,int n){
        if(n<0 || ds.size()>k)  return;     //default case
        if(n==0 && ds.size()==k){           //base case
            ans.push_back(ds);
            return;
        }
        for(int i=cnum;i<=9;i++){
            ds.push_back(i);
            recur(ds,i+1,k,n-i);        //n-i should be here
            ds.pop_back();              //instead of decrement
        }
    }
};