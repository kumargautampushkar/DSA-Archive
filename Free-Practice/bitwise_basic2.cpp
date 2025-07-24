#include <bits/stdc++.h>
using namespace std;

int checkpwr(int a){
    if(((a) & (a-1)) == 0 ) return true;
    else return false;
}

int countSetBits(int a){
    int cnt = 0;
    while(a!=0){
        cnt += a&1;
        a = a>>1;
    }
    return cnt;
}

int countSetBitsHack(int a){
    int ans=0;
    while(a>0){
        a = a&(a-1);
        ans++;
    }
    return ans;
}

int main(){
    
    int a;cin>>a;
    cout<<checkpwr(a)<<endl;
    cout<<countSetBits( a)<<endl;
    cout<<countSetBitsHack(a)<<endl;
    return 0;
}