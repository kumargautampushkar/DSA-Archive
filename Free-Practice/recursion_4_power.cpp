#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli power(int a,int x){
    if(x==0) return 1;
    return a*power(a,x-1);
}

lli power_opt(int a,int x){
    if (x ==0) return 1;
    lli sub_prob = power_opt(a,x/2);
    lli sub_prob_sq = sub_prob*sub_prob;
    if(x&1) return a * sub_prob_sq;
    return sub_prob_sq;

}
int main(int argc, char const *argv[])
{
    //cout<<argc<<endl;
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    cout<<power_opt(x,n)<<endl;
    return 0;
}
