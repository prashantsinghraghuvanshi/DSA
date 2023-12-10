#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        vector<vector<int>> ans(colSize, vector<int>(rowSize,0));
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};