#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());      //sorting is essential for this approach
        vector<int>ds;      //to store the element 
        recur(0,target,candidates,ds);
        return ans;
    }

    void recur(int ind,int target,vector<int> &arr,vector<int>&ds){
        if(target==0){          //base condition
            ans.push_back(ds);
            return;
        }

        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1])   continue;   //eliminate duplicate
            if(arr[i]>target)   break;  //default condition
            ds.push_back(arr[i]);
            recur(i+1,target-arr[i],arr,ds);
            ds.pop_back();
        }
    }
};