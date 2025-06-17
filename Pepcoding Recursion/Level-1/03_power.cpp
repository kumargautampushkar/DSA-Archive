#include <iostream>
#include <vector>

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli power(int x,int n){
    if(n == 0 || n<=0) return 1;
    // The code has been written this way because it makes tracing function call easier using auxillary stack space
    lli xnm1 = power(x,n-1);
    lli xnm = x * xnm1;
    return xnm;

}

int main(){
    int x,n;
    cin>>x>>n;
    auto ans = power(x,n);
    cout<<ans<<endl;
    return 0;
}