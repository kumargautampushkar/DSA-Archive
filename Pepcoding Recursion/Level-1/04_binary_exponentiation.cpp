#include <iostream>
#include <cmath>
#define lli long long int
using namespace std;


lli power(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2 != 0){
        auto temp = x*power(x,n-1) ;
        return temp;    
    }
    
    auto temp = power(x,n/2) ;
    temp *=temp;
    return temp;
}

lli power2(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    
    int xpnb2 = power(x,n/2);
    int xn = xpnb2*xpnb2;

    if(n%2==1){
        xn = xn*x;
    }

    return xn;

}

int main(){
    int x,n;
    cin >>x>>n;
    int ans;
    ans = power(x,n);
    cout<<ans<<endl;
    return  0;
}