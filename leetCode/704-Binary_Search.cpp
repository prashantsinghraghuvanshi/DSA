#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target){
        int lft = 0;
        int rht = nums.size()-1;
        int mid;

        while(lft<=rht){
            mid = (lft + rht)/2;
            if(nums[mid]<target){
                lft = mid + 1;
            }
            else if(nums[mid]>target){
                rht = mid - 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};

int main(){
    vector<int>nums = {-1,0,3,5,12};
    int target = 9;
    Solution demo;
    cout<<demo.search(nums,target);
}