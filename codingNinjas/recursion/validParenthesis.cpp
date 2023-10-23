#include<bits/stdc++.h>
using namespace std;

void generateParenthesis(vector<string>&v,int n,int ob,int cb,string s){
    if(ob==n && cb==n){     //base condition
        v.push_back(s);
        return;
    }
    if(ob<n){               //add an opening bracket
        generateParenthesis(v,n,ob+1,cb,s+"(");
    }
    if(cb<ob){              //add a closing bracket
        generateParenthesis(v,n,ob,cb+1,s+")");
    }
}

vector<string> validParenthesis(int n){
    vector<string>v;
    int ob=0,cb=0;
    generateParenthesis(v,n,ob,cb,"");    
    return v;
}
