/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

int find_smallest_string(vector <string> &str){
    int mini=200;
    for(auto &it:str){
        int x=it.size();
        mini=min(x,mini);
    }
    return mini;
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int lps=0;
        string ans="";
        int k = find_smallest_string(strs);
        for(int i=0;i<k;i++){
            bool flag1=true;
            char cmp= strs[0][i];

            for(int j=0;j<strs.size();j++){
                bool flag2=true;
                if(strs[j][i]!=cmp){
                    flag2=false;
                    flag1=false;
                    break;
                }
            }
            if(flag1==false){
                break;
            }
            lps++;
        }
        for(int i=0;i<lps;i++){
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
// @lc code=end

