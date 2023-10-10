#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;                     
        deque<int>dq;                               //empty cond is very essential to check
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front()==(i-k))    //out of bound
                dq.pop_front();
            
            while(!dq.empty() && nums[dq.back()]<=nums[i]){     //pop if larger element is found
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){         //window from k to n
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;       
    }
};