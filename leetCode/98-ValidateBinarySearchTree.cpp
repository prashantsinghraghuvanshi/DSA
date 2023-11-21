#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    long long maxVal=LLONG_MAX;
    long long minVal=LLONG_MIN;
    
    bool ans=true;
    bool isValidBST(TreeNode* root){
        if(root==NULL)  return ans;
        recur(root,maxVal,minVal);    //traversal for validation
        return ans;
    }
    void recur(TreeNode *node,long long upper,long long lower){
        if(node==NULL)  return;                 //base
        if(node->val<=lower || node->val>=upper){   //default
            ans=false;
            return;
        }
        recur(node->left,node->val,lower);
        recur(node->right,upper,node->val);
    }
};