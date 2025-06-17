/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

int fibdp(int n, vector <int> &dp) {
    if(dp[n]==-1)
    {   
        if(n==0) return dp[n]=0;
        else if(n==1) return dp[n]= 1;
        else return dp[n] =fibdp(n-2,dp)+fibdp(n-1,dp);
    }
    else{
        int x = dp[n];
        return x;
    }
}

int fibcaller(int n){
    vector <int> dp(n+1,-1);
    return fibdp(n,dp);
}
class Solution {
public:
    
    
    int fib(int n) {
        return fibcaller(n);
    }

};
// @lc code=end

