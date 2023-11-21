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
    int cnt=0;
    int goodNodes(TreeNode* root) {
        if(root==NULL)  return cnt;
        //int mx=0;
        //initially root is max? right!!
        depthFirst(root,root->val);
        return cnt;
    }

    void depthFirst(TreeNode *node,int mx){
        if(node==NULL)  return;
        if(node->val>=mx){  //equal to is also a valid case 
            mx=node->val;
            cnt++;
        }
        depthFirst(node->left,mx);
        depthFirst(node->right,mx);
    }
};