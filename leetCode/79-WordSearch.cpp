#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(recur(board,word,i,j,0))
                    return true;
            }
        } 
        return false;
    }

    bool recur(vector<vector<char>> &board,string &word,int i,int j,int index){
        if(index==word.size()){     //character found
            return true;
        }
        //default or 'out of bound' condition
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[index])
            return false;

        char ch=board[i][j];
        board[i][j]='$';

        bool found = recur(board,word,i-1,j,index+1) || recur(board,word,i+1,j,index+1) || recur(board,word,i,j-1,index+1) || recur(board,word,i,j+1,index+1);

        board[i][j]=ch;
        return found;
    }
};