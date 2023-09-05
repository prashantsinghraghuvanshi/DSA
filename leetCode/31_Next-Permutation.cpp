#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ptr1 = nums.size() - 2;     //pointer approach 3
        int ptr2 = nums.size() - 1;
        int pvt;
        vector<int> vec;
        vec.push_back(nums[ptr2]);      //insert into vec

        while (ptr1 >= 0 && nums[ptr1] >= nums[ptr2]) {     //main algo.
            vec.push_back(nums[ptr1]);
            ptr1--;                 //to ptr. to track cond.
            ptr2--;
        }

        if(ptr1>=0){                           
            int pvt=nums.size()-1;                  //need to use third ptr.
            while(nums[pvt]<=nums[ptr1]){           //sec. logic
                pvt--;
            }
            swap(nums[ptr1], nums[pvt]);       //main swap
        }

        reverse(nums.begin()+ptr2,nums.end());      //reverse from ptr2 to end
    }
};

int main(){
    vector<int> nums={1,3,2};
    Solution demo;
}