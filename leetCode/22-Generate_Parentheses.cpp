#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;                           //created answer vector
        int ob=0,cb=0;                              //to count opening & closing 
        recur(v,n,ob,cb,"");                        //call to recursive func.
        return v;       
    }

    void recur(vector<string> &v,int n, int ob, int cb, string s){      //main recursive func.
        if(ob == n && cb == n){         //final case
            v.push_back(s);
            return;
        }

        if(ob < n){                     //case when no. of opening 
            recur(v,n,ob+1,cb,s+"(");   //bracket is smaller
        }

        if(cb < ob){                    //case when no. of closing 
            recur(v,n,ob,cb+1,s+")");   //bracket is smaller
        }
    }
};

int main(){

}