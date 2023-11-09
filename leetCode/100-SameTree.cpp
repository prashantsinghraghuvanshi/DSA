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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //both trees are empty
        if(p==NULL && q==NULL)  return true;
        //one is null
        if(p==NULL || q==NULL)  return false;
        //default condition
        if(p->val != q->val)    return false;
        //recursion
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};