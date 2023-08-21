#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;                            //created a stack
        int max = s.size();                         
        if (max % 2 != 0) {                         //the size of string should be even in all valid cases
            return false;
        }
        for (int i = 0; i < max; i++) {                         //string traversal
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stk.push(s[i]);                                 //push into stack
            } 
            else{
                if(stk.empty()){
                    return false;
                }
                char top = stk.top();
                stk.pop();
                if((s[i] == ')' && top != '(') || (s[i] == ']' && top != '[') || (s[i] == '}' && top != '{')) {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    Solution demo;
    cout<<demo.isValid(s);
}