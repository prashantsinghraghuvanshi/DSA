#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;        //answer data struct.
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        recur(0,temp,nums);
        return ans;
    }

    void recur(int ind,vector<int>&temp,vector<int>&nums){
        ans.push_back(temp);    //base case
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;       //duplicate
            temp.push_back(nums[i]);
            recur(i+1,temp,nums);
            temp.pop_back();            
        }
        
    }
};