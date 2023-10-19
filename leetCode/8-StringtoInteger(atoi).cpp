#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, base = 0, i = 0;
        int len = s.length();

        while (i<len && s[i]==' ') {
            i++;
        }

        if (i<len && (s[i]=='-' || s[i]=='+')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }

        while (i<len && isdigit(s[i])){         //main program    
            int digit =s[i]-'0';

            if (base>INT_MAX/10 || (base==INT_MAX/10 && digit>7)) {
                return (sign==1) ? INT_MAX : INT_MIN;
            }

            base = 10*base+digit;
            i++;
        }

        return base * sign;
    }
};


int main(){
    string s="03432";
    Solution demo;
    cout<<demo.myAtoi(s);
}