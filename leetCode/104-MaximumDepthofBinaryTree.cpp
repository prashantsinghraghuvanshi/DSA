#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)      //default case
            return 0;
        
        int lft=1+maxDepth(root->left);     //left traversal
        int rht=1+maxDepth(root->right);    //right traversal

        return 1+max(lft,rht);      //solution
    }
};