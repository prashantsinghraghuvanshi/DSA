#include<bits/stdc++.h>
using namespace std;

class Solution {
    priority_queue<int>pq;
public:
    int findKthLargest(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(pq.size()>nums.size()-k+1){
            pq.pop();
        }
        return pq.top();
    }
};