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
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        recur(root,ans);
        return ans;
    }

    int recur(TreeNode *node,int &ans){
        if(node==NULL)  return 0;
        int lft=max(0,recur(node->left,ans));
        int rht=max(0,recur(node->right,ans));
        ans=max(ans,node->val+lft+rht);
        return (node->val+max(lft,rht));
    }
};