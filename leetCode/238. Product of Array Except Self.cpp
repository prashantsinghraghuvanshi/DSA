#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,nums[0]),ans(n);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i];
        }
        int curr=1;
        for(int i=n-1;i>=0;i--){
            if(i==0)
                ans[i]=curr;
            else
                ans[i]=pre[i-1]*curr;
            curr*=nums[i];
        }
        for(int i=0;i<n;i++)
            cout<<"->"<<ans[i];
        return ans;
    }
};

int main(){
    vector<int> nums;
    int n,j;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i =0; i<n; i++){
        cout<<"Enter the "<<i<<" element : ";
        cin>>j;
        nums.push_back(j);
    }
    Solution demo;
    demo.productExceptSelf(nums);
}