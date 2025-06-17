/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#define node TreeNode
void preorder (TreeNode * root, vector <int> &v){
    if(root == nullptr) return;
    traversal(root->left,v);
    v.push_back(root->val);
    traversal(root->right,v);
    
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> v;
        traversal(root,v);
        return v;
    }
};
// @lc code=end

