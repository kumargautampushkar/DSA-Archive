#include <bits/stdc++.h>
using namespace std;

void printDecreasing(int n){
    if(n<0) return;
    cout<<n<<" ";
    printDecreasing(n-1);
}

void printIncreasing(int n){
    if(n<0) return;
    printIncreasing(n-1);
    cout<<n<<" ";
}

void pi(int n,int i){
    if(i>n) return;
    cout<<i<<" ";
    pi(n,i+1);
}

void pdi(int n){
    if(n<0) return ;
    cout<<n<<endl;
    pdi(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    printDecreasing(n);
    cout<<endl;
    printIncreasing(n);
    cout<<endl;
    pi(n,0);
    cout<<endl<<endl;
    pdi(n);
    return 0;
}