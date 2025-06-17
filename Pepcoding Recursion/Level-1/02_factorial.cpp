#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <queue>

#define lli long long int


using namespace std;

lli factorial(int n){
    if(n<=1) return 1;
    return n * factorial(n-1);
}


int main(){
    int x;
    cin>>x;

    auto ans = factorial(x);
    cout<<ans<<endl;

    return 0;
}