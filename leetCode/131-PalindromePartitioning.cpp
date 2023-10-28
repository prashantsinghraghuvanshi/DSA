#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s) {
        vector<string>temp;         //temp vector to contain strings
        recur(0,s,temp);
        return ans;
    }

    void recur(int index,string s,vector<string> &temp){
        if(index==s.size()){        //base condition
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(ispalindrome(s,index,i)){
                temp.push_back(s.substr(index,i-index+1));  //substring till palindrome is valid
                recur(i+1,s,temp);
                temp.pop_back();
            }
        }
    }

    bool ispalindrome(string s,int start,int end){      //to check if a string is palindrome
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
};