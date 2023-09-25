#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s){
        set<char>st;                //set approach : memory complexity -> O(n)
        int ans=0;
        int start=0;
        for(int end=0;end<s.size();end++){      //sliding window
            while(st.find(s[end])!=st.end()){
                st.erase(s[start]);
                start++;
            }
            st.insert(s[end]);
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};

int main(){
    string s="abcabcbb";
    Solution demo;
    int a = demo.lengthOfLongestSubstring(s);
    cout<<"answer : "<<a;
}