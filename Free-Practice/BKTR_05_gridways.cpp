#include <bits/stdc++.h>
using namespace std;


int gridWays(int m, int n, int i, int j){
    if(i == m-1 && j == n-1) return 1;
    if(i>= m || j>=n) return 0;

    int ans = gridWays(m,n,i+1,j) + gridWays(m,n,i,j+1);
    return ans;

}


int main(){
    int m,n;
    cin>>m>>n;
    cout<<gridWays(m,n,0,0)<<endl;

    return 0;
}