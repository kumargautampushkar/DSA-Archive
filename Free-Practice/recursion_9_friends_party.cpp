#include <bits/stdc++.h>
using namespace std;


long long int fpRec(int n){
    if(n<=2) return n;
    return fpRec(n-1)+(n-1)*fpRec(n-2);
}

int helper(int n, vector<long long int> &dp){
    if(n<=2) return dp[n]=n;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = fpRec(n-1)+(n-1)*fpRec(n-2);
}

int fpDP(int n){
    vector <long long int> dp(n+2,-1);
    return helper(n,dp);
}


int main(){
    int n;cin>>n;
    cout<<fpRec(n)<<endl;
    cout<<fpDP(n)<<endl;
    return 0;
}