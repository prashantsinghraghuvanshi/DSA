#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int ptr1 = 0; ptr1 < nums.size() - 2; ptr1++) {        //outer loop
            // Skip duplicate elements for ptr1
            if (ptr1 > 0 && nums[ptr1] == nums[ptr1 - 1]) {         //remove duplicate for ptr1
                continue;
            }
            
            int ptr2 = ptr1 + 1;
            int ptr3 = nums.size() - 1;
            
            while (ptr2 < ptr3) {                                   //inner loop for 2 pointers
                int sum = nums[ptr1] + nums[ptr2] + nums[ptr3];
                
                if (sum == 0) {
                    ans.push_back({nums[ptr1], nums[ptr2], nums[ptr3]});    //push into 2D vector

                    while (ptr2 < ptr3 && nums[ptr2] == nums[ptr2 + 1]) {   //remove duplicate for ptr2
                        ptr2++;
                    }

                    while (ptr2 < ptr3 && nums[ptr3] == nums[ptr3 - 1]) {   //remove duplicate for ptr3
                        ptr3--;
                    }
                    
                    ptr2++;                                         //traversal
                    ptr3--;
                } else if (sum > 0) {                               //right ptr shift
                    ptr3--;
                } else {                                            //left ptr shift
                    ptr2++;
                }
            }
        }
        
        return ans;
    }
};

int main(){
}