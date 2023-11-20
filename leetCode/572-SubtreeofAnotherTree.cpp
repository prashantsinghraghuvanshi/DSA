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
    TreeNode* node;
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        find(root,subRoot);
        return node!=NULL;      
    }

    void find(TreeNode *root, TreeNode *subroot) {
        if(root==NULL) return;  // base condition

        if(isSameTree(root, subroot)) {
            node=root;
            return;
        }

        find(root->left, subroot);
        find(root->right, subroot);
    }

    bool isSameTree(TreeNode *root,TreeNode *node){
        //base condition
        if(root==NULL && node==NULL)    return true;
        //default fail conditions
        if(root==NULL || node==NULL)    return false;
        if(root->val != node->val)      return false;
        //recursion
        return isSameTree(root->left,node->left) && isSameTree(root->right,node->right);
    }
};