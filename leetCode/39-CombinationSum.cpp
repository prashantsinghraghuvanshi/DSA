#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;          //to collect element        
        findCombination(0,target,candidates,ds);
        return ans;             //answer
    }

    void findCombination(int ind,int target,vector<int>& arr,vector<int>& ds){
        if(ind==arr.size()){         //base condition
            if(target==0)
                ans.push_back(ds);
            return;
        }
        if(arr[ind]<=target){       //to add an element
            ds.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,ds);
            ds.pop_back();
        }
        findCombination(ind+1,target,arr,ds);       //left the element 
    }
};