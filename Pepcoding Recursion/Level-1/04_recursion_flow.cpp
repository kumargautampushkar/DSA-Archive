#include <bits/stdc++.h>
using namespace std;

// Pepcoding video tutorial : https://youtu.be/R7qja_gZrvI?feature=shared

// This is for understanding and tracing the recursion call, to help understand the code in easier way
void pzz(int n){
    if(n==0) return;
    cout<<"Pre "<<n<<endl;
    pzz(n-1);
    cout<<"In "<<n<<endl;
    pzz(n-1);
    cout<<"Post "<<n<<endl;
}


// This is actual function 
void azz(int n){
    if(n==0) return;
    cout<<n<<endl;
    azz(n-1);
    cout<<n<<endl;
    azz(n-1);
    cout<<n<<endl;
}



int main(){
    int n;
    cin>>n;
    //pzz(n);
    azz(n);
    return 0;
}