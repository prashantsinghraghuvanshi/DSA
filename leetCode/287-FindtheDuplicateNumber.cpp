#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];         //hare and tortoise technique is implemented
        int fast=nums[0];         //slow and fast pointer declared
        while(true){
            slow=nums[slow];            //value is used as an index to traverse
            fast=nums[nums[fast]];      

            if(slow==fast)              //interception is observed
                break;
        }
        
        int finder=nums[0];
        //second loop to check for number 
        //loop intersection will have same distance
        //from slow pointer as start of array
        while (slow != finder) {
            slow = nums[slow];
            finder = nums[finder];
        }
        return finder;
    }
};

int main(){
    vector<int> nums={1,3,4,2,2};
    Solution demo;
    cout<<demo.findDuplicate(nums);
}