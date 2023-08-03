#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowcase[9][9]={0};      
        int colcase[9][9]={0};      
        int gridcase[9][9]={0};

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]!='.'){
                    int number = board[i][j] - '0';

                    int k= (i/3)*3+(j/3);               //formula to calculate grid position

                    if((rowcase[i][number-1]++)|| (colcase[j][number-1]++) || (gridcase[k][number-1]++))
                        return false;                   //condition to check wheather the number is valid
                }
            }
        }
        return true;      
    }
};