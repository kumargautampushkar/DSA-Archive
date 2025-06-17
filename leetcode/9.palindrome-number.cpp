/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string p=to_string(x);
        string q =p;
        reverse(q.begin(),q.end());
        if(p==q) return true;
        else return false;
    }
};
// @lc code=end

