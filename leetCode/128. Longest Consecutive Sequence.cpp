#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt = 0, ans = 0;               //attempt 2 : used vector and instead
        set<int> st;                        //of looking for immediate succesor
                                            //i'll first check for immediate 
        for (int x : nums)                  //predecessor and discard the element
            st.insert(x);

        for (auto it : st) {
            if (st.find(it - 1) != st.end()) {
                cnt = 0;
                continue;
            } else {
                while (st.find(it + 1) != st.end()) {
                    ++it;
                    ++cnt;
                }
                if (cnt > ans)
                    ans = cnt;
            }
        }
        if(st.size()!=0){                   //finally passed all tests of LC
            return ans + 1;                 //after few minor tweaks ;D
        }
        else
            return ans;
    }
};

int main(){
    vector<int> nums;
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" index element : ";
        cin>>k;
        nums.push_back(k);
    }
    Solution demo;
    int ans= demo.longestConsecutive(nums);
    cout<<ans;
}