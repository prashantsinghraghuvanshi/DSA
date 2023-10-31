#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;     //initialize board with '.'
        }
        recur(0,board,n);
        return ans;
    }

    void recur(int col,vector<string> &board,int n){
        if(col==n){                 //base condition
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';    //valid queen placed
                recur(col+1,board,n);   //recursion call
                board[row][col]='.';    //back-tracking
            }
        }
    }

    bool isSafe(int row,int col, vector<string>board, int n){
        int temprow=row;
        int tempcol=col;
        while(row>=0 && col>=0){        //top diagonal back check
            if(board[row][col]=='Q')    return false;
            row--;
            col--;
        }
        row=temprow;
        col=tempcol;
        while(col>=0){                  //horizontal back check
            if(board[row][col]=='Q')    return false;
            col--;
        }
        row=temprow;
        col=tempcol;
        while(row<n && col>=0){         //bottom diagonal beck check
            if(board[row][col]=='Q')    return false;
            row++;
            col--;
        }
        return true;                    //valid spot found!
    }
};