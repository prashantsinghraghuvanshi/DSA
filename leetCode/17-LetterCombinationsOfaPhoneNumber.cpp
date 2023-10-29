#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return ans;
        string nums[10]={
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        recur(digits,nums,0,"");
        return ans;
    }
    void recur(string digits,string nums[],int ind,string s){
        if(ind==digits.length()){
            ans.push_back(s);
            return;
        }
        string val=nums[digits[ind]-'0'];
        for(int j=0;j<val.length();j++){
            recur(digits,nums,ind+1,s+val[j]);
        }
    }
};