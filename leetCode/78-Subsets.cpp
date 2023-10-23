#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;        //final 2d vector
    vector<vector<int>> subsets(vector<int>& nums) {    //main program
        vector<int>temp;    
        recur(nums,0,temp);
    }

    void recur(vector<int>&nums,int i,vector<int>&temp){
        if(i==nums.size()){         //base condition
            ans.push_back(temp);    //answer insertion
            return;
        }
        recur(nums,i+1,temp);       //the number is excluded
        temp.push_back(nums[i]);    
        recur(nums,i+1,temp);       //the number is included
        temp.pop_back();
    }
};