#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> cnt;
        int left=0,maxCount=0,res=0;
        for(int right=0;right<s.size();right++){
            cnt[s[right]]++;
            maxCount=max(maxCount,cnt[s[right]]);
            if(right-left+1-maxCount>k){
                cnt[s[left]]--;
                left++;
                if(cnt[left]==0){
                    cnt.erase(cnt[left]);
                }
            }
            else{
                res=max(res,right-left+1);
            }
        }
        return res;
    }
};

int main(){
    string s="ABABAA";
    int k=2;
    Solution demo;
    int ans=demo.characterReplacement(s,k);
    cout<<ans;
}