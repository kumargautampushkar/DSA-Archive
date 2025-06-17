/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
#include <bits/stdc++.h>
using namespace std;

void preorder (TreeNode * root, vector <int> &v){
    if(root == nullptr) return;
    v.push_back(root->val);
    traversal(root->left,v);
    traversal(root->right,v);
    
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        traversal(root,v);
        return v;
    }
};
// @lc code=end

