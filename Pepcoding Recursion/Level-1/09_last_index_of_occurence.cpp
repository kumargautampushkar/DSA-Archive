#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Here we are just traversing array backwards and almost everything else is similar to previous question
int lio(vector <int> &v, int n, int num){
    if(n == -1) return -1;
    if(v[n]== num) return n;
    int x = lio(v,n-1,num);
    return x;
}


int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int num ;
    cin>>num;

    auto ans = lio(v,n-1,num);
    cout<<ans<<endl; 

    return 0;
}