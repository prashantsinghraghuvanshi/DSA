#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        int max = nums.size();
        for(int i=0;i<max;i++){
            int n=nums[i];
            int com=target-n;
            if(ump.count(com)){
                return{ump[com],i};       
            }
            ump[n]=i;
        }
        return{};
    }
};

int main(){
    
}