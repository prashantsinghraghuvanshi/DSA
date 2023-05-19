#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"it is an anagram";
        }
        else
            cout<<"not an anagram";
    }
};

int main(){
    string s,t;
    cout<<"Enter the first string : ";
    cin>>s;
    cout<<"Enter the second string : ";
    cin>>t;
    Solution a;
    cout<<a.isAnagram(s,t);
}