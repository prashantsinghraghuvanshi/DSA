#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int ptr1 = 0;
        int ptr2 = s.length();                          //use of length instead of sizeof
        while(ptr1<ptr2){                               
            if(!iswalnum(s[ptr1])){
                ptr1++;
                continue;
            }
            if(!iswalnum(s[ptr2])){
                ptr2--;
                continue;
            }
            if(tolower(s[ptr1])!=tolower(s[ptr2])){     //tolower was essential
                return false;
            }
            ptr1++;
            ptr2--;
        }
        return true;
    }
};

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    Solution demo;
    cout<<demo.isPalindrome(s);
}