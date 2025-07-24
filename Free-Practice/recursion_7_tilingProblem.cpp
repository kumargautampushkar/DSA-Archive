#include <bits/stdc++.h>
using namespace std;

int tillingProblemHelp(int l, int b){
    if(l<b) return 1;
    if(l == b) return 2;
    return tillingProblemHelp(l-1,b) + tillingProblemHelp(l-b,b);
}

int tillingProblemHelpDP(int l, int b, vector<vector<int>> &dp){
    if(l<b) return dp[l][b]= 1;
    if(l == b) return dp[l][b]=2;
    if(dp[l][b] != -1)
        return dp[l][b];
    else 
        return dp[l][b] = tillingProblemHelpDP(l-1,b,dp) + tillingProblemHelpDP(l-b,b,dp);
}

int tpDP(int l,int b){
    vector <vector<int>> dp(l+1,vector<int> (b+1,-1));
    return tillingProblemHelpDP(l,b,dp);
}

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    int m; cin>>m;
    cout<<tillingProblemHelp(n,m)<<endl;
    cout<<tpDP(n,m)<<endl;
    return 0;
}
