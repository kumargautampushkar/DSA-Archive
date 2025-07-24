#include <bits/stdc++.h>
using namespace std;

void fun21(int n){
    if(n==0) return;
    cout<<n<<" ";
    fun21(n-1);
    fun21(n-1);
}


void fun2(int n){
    if(n==0) return;
    
    fun2(n-1);
    cout<<n<<" ";
    fun2(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    fun2(n);
    return 0;
}
