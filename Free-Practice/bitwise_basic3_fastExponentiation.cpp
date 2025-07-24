// fast_exponentiation
#include <bits/stdc++.h>
using namespace std;

int fast_exponentiation(int a,int b){
    int ans = 1;
    while(b!=0){
        int last_bit = (a&1);
        if(last_bit){
            ans = a * ans;
        }
        a = a*a;
        b = b>>1;
    }
    return ans; 
}

string convertToBinary(int n){
    if(n==0){
        return "0";
    }
    string ans="";
    while(n>0){
        if(n&1){
            ans.push_back('1');
        }else{
            ans.push_back('0');
        }
        n = (n>>1);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int convertToBinaryINT(int n){
    int ans = 0;
    int p = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;
        p*=10;
        n = n>>1;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    cout<<fast_exponentiation(a,b)<<endl;
    cout<<convertToBinary(a)<<endl;
    cout<<convertToBinaryINT(a)<<endl;
    return 0;
}
