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
    vector<int>temp;
    int kthSmallest(TreeNode* root, int k){
        recur(root);
        return temp[k-1];
    }
    void recur(TreeNode* node){
        //inorder traversal
        if(node==NULL)  return;
        recur(node->left);
        temp.push_back(node->val);
        recur(node->right);
    }
};