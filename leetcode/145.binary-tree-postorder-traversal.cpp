/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    traversal(root->right,v);
    v.push_back(root->val);
    
}
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> ans;
        traversal(root,ans);
        return ans;    
    }
};
// @lc code=end

