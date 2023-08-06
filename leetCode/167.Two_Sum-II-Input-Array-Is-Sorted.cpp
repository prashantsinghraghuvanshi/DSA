#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lptr = 0;                           //basic 2 pointer approach is implemented
        int rptr = numbers.size()-1;            
        vector<int>ans;
        while(numbers[lptr]<numbers[rptr]){             //loop will break if both ptrs. intersect
            if(numbers[lptr]+numbers[rptr]>target){
                rptr--;
            }
            if(numbers[lptr]+numbers[rptr]<target){
                lptr++;
            }
            if(numbers[lptr]+numbers[rptr]==target){
                ans.emplace_back(lptr+1);
                ans.emplace_back(rptr+1);
                break;
            }
        }
        return ans;
    }
};

int main(){
    vector<int>numbers;
    int n,num,target;
    cout<<"Enter the size of vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the index "<<i<<" : ";
        cin>>num;
        numbers.push_back(num);
    }
    cout<<"Enter the target : ";
    cin>>target;
    Solution demo;
    demo.twoSum(numbers,target);
}