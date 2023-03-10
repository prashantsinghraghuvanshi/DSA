#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        int k=sizeof(nums);
        for(int i=1;i<=k;i++){
            if(i==k){
                if(nums.at(i)>nums.at(1))
                cnt++;
            }
            if(nums.at(i)>nums.at(i+1)){
                cnt++;
            }
        }
        if(cnt<=1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    vector<int>nums;
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cout<<"enter the element at "<<i<<" index : ";
        cin>>k;
        nums.push_back(k);
    }
    Solution a;
    cout<<a.check(nums);
}