#include <bits/stdc++.h>
using namespace std;

void printArrinc(vector<int> v, int n){
    if(n==-1) return;
    printArrinc(v,n-1);
    cout<<v[n]<<" ";
    // printArrinc(v,n-1);
}

void printArrDec(vector<int> v, int n){
    if(n==-1) return;
    printArrDec(v,n-1);
    cout<<v[n]<<" ";
    // printArrinc(v,n-1);
}

vector <int> inputArr(int n){
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n; cin>>n;
    auto v = inputArr(n);
    printArrinc(v,n-1);
    cout<<endl;
    printArrDec(v,n-1);
    return 0;
}
