#include<bits/stdc++.h>
using namespace std;

class Solution {
    struct node{        //structure of a trie 
        char c;
        bool ends;
        node *child[26];
        string word;
    };
    struct node *getnode(char c){       //char insertion in a trie
        node *newnode= new node;
        newnode->c=c;
        newnode->ends=false;
        newnode->word="";
        for(int i=0;i<26;i++){
            newnode->child[i]=NULL;
        }
        return newnode;
    }
    node *root=getnode('/');    //root creation

    void insert(string s){      //insertion of a string in a trie
        node *curr=root;
        int index,i=0;
        while(s[i]){
            index=s[i]-'a';
            if(curr->child[index]==NULL)
                curr->child[index]=getnode(s[i]);
            curr=curr->child[index];
            i+=1;
        }
        curr->ends=true;
        curr->word=s;
    }

    void solve(vector<vector<char>> &board,int i, int j,int r,int c,vector<string> &ans,node *curr){
        int index=board[i][j]-'a';
        if(board[i][j]=='$' || curr->child[index]==NULL)
            return;
        curr=curr->child[index];
        if(curr->ends==true){
            ans.push_back(curr->word);
            curr->ends=false;
        }
        char ch=board[i][j];
        board[i][j]='$';
        
        if(i>0)     //Upward traversal
            solve(board,i-1,j,r,c,ans,curr);
        if(i<r-1)   //Downward traversal
            solve(board,i+1,j,r,c,ans,curr);
        if(j>0)     //Left Traversal
            solve(board,i,j-1,r,c,ans,curr);
        if(j<c-1)   //right traversal
            solve(board,i,j+1,r,c,ans,curr);
        
        board[i][j]=ch;     //backtrack/make it unvisited 
    }   
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<words.size();++i){        //insertion into trie
            insert(words[i]);
        }
        vector<string>ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                solve(board,i,j,r,c,ans,root);
            }
        }
        return ans;
    }
};