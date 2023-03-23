#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    }
};

int main(){
    vector<int>nums;
    int k,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int l;
        cout<<"Enter the element at "<<i<<" index : ";
        cin>>l;
        nums.push_back(l);
    }
    cout<<"Enter the number of times to rotate right : ";
    cin>>k;
    Solution a;
    a.rotate(nums,k);
}