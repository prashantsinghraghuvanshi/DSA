#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>cnt(128);
        int req=s1.length();
        for(char c: s1){                //insert all char from s1
            ++cnt[c];
        }
        for(int l=0,r=0;r<s2.length();++r){
            if(--cnt[s2[r]]>=0){        //to check weather all elements
                req--;                  //are present
            }
            while(req==0){              //main logic
                if(r-l+1==s1.length()){
                    return true;
                }
                if(++cnt[s2[l++]]>0){
                    ++req;
                }
            }
        }
        return false;
    }
};