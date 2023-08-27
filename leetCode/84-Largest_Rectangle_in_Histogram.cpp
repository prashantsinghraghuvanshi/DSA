#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>stk;
        int max = 0;
        int tp;
        int topArea;
        int n = heights.size();
        int i = 0;
        
        while(i<n){
            if(stk.empty() || heights[stk.top()] <= heights[i]){
                stk.push(i++);              //push until height is smaller
            }                               

            else{
                tp=stk.top();               //taking top value in tp
                stk.pop();

                topArea = heights[tp]*(stk.empty()?i : i-stk.top()-1);      //calc. topArea

                if(max < topArea){          //comp. between max and topArea
                    max = topArea;
                }
            }
        }

        while(stk.empty()==false){              //to clear off the stack & calc. area
            tp=stk.top();
            stk.pop();
            topArea = heights[tp]*(stk.empty()?i : i-stk.top()-1);

                if(max < topArea){
                    max = topArea;
                }
        }
        return max;
    }
};

int main(){
    vector<int> heights = {};
    Solution demo;
    cout<<demo.largestRectangleArea(heights);
}