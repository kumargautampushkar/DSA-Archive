/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
#define  node TreeNode

bool istree(TreeNode * p, TreeNode * q){
    if(!p && !q ) return true;
    if((!p && q) || (p && !q)) return false;
    if(p->val!=q->val) return false;
    return istree(p->left,q->left) && istree(p->right,q->right);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=istree(p,q);
        return ans;        
    }
};
// @lc code=end

