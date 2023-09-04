#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int lft=0;
        int rht=nums.size()-1;
        int ans=nums[0];
        while(lft<=rht){                     //applied binary search

            int mid=lft+(rht-lft)/2;
            if(nums[lft]<nums[rht]){
                ans=min(ans,nums[lft]);
                break;
            }
            else{
                
                ans=min(ans,nums[mid]);     
                if(nums[mid]>=nums[lft]){
                    lft=mid+1;
                }
                else{
                    rht=mid-1;
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {3,1,2};
    Solution demo;
    cout<<demo.findMin(nums);
}