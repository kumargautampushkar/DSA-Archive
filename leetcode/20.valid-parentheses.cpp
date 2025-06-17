/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <bits/stdc++.h>
#define fii(a, b) for (int i = a; i < b; i++)
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        int n = s.length();

        // if(s=="]" || s=="}" ||s==")" )

        fii(0, n)
        {
            if (stk.empty())
            {
                stk.push(s[i]);
            }

            else if (s[i] == ')' && !stk.empty() && stk.top() == '(')
                stk.pop();
            else if (s[i] == '}' && !stk.empty() && stk.top() == '{')
                stk.pop();
            else if (s[i] == ']' && !stk.empty() && stk.top() == '[')
                stk.pop();
            else
                stk.push(s[i]);
        }
        if (stk.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end
