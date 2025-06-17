/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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



bool isTreeSymmetric(TreeNode *lroot,TreeNode *rroot){
    
    if(lroot==nullptr && rroot==nullptr)
        return true;
    if((lroot==nullptr && rroot!=nullptr) || (lroot!=nullptr && rroot==nullptr))
        return false;
    if(lroot->val!=rroot->val)
        return false;
    
    return isTreeSymmetric(lroot->right,rroot->left) && isTreeSymmetric(lroot->left,rroot->right);
    

}


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isTreeSymmetric(root->left,root->right);
    }
};
// @lc code=end

