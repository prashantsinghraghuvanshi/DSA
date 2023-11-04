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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        recur(root,diameter);
        return diameter;     
    }

    int recur(TreeNode *node,int diameter){     //address to int is essential
        if(node==NULL)      //base condition
            return 0;
        int lftCount=recur(node->left,diameter);
        int rhtCount=recur(node->right,diameter);
        diameter=max(diameter,lftCount+rhtCount);
        return 1+max(lftCount,rhtCount);
    }
};