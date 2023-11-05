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
    bool ans=true;
    // int height=0;
    bool isBalanced(TreeNode* root) {
        recur(root);
        return ans;
    }

    int recur(TreeNode *node){
        if(node==NULL || ans==false){
            return 0;
        }
        int lft=recur(node->left);
        int rht=recur(node->right);

        if(abs(lft-rht)>1)
            ans=false;

        return 1+max(lft,rht);
    }
};