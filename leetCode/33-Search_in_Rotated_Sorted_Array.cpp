#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target){
        int ptr1=0;                         //approach : Binary Search
        int ptr2=nums.size()-1;
        int mid;

        while(ptr1<=ptr2){
            mid=ptr1+(ptr2-ptr1)/2;
            if(nums[mid]==target){          //returns ans
                return mid;
            }
            else if(nums[ptr1]<=nums[mid] && target>=nums[ptr1] && target<nums[mid]){       //check in left portion
                ptr2=mid-1;
            }
            else if(nums[mid]<=nums[ptr2] && target>nums[mid] && target<=nums[ptr2]){       //check in right portion
                ptr1=mid+1;
            }
            else{                               //if both of the conditions above isn't applied
                if(nums[mid]<=nums[ptr2]){      
                    ptr2=mid-1;
                } 
                else{
                    ptr1=mid+1;
                }
            }
        }
        return -1;
    }
};

int main(){
    vector<int>nums = {4,5,6,7,1,2};
    int target=1;
    Solution demo;
    cout<<demo.search(nums,target);
}