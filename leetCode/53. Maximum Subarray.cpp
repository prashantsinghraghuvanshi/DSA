#include<bits/stdc++.h>                                 
using namespace std;
class Solution {                                            
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN, cur=0;                           //created two variables, sum->stores max sub array found so far
        for(auto i=nums.begin();i!=nums.end();i++){         //cur->stores the max sub aray till the particular element
            cur=cur+*i;
            if(sum<cur){
                sum=cur;
            }
            if(cur<0){
                cur=0;
            }
        }
        return sum;
    }
};

int main(){
    
}