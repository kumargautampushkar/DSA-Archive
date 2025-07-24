#include <bits/stdc++.h>
using namespace std;

vector <int> inputArr(int n){
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}

vector <int> printArr(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int lastOccurance(vector <int> &v,int idx,int q){
    if(v[idx]==q) return idx;
    else return lastOccurance(v,idx-1,q);
    if(idx == -1) return -1;
}

int firstOccurance(vector <int> &v, int idx, int q){
    if(v[idx]==q) return idx;
    return firstOccurance(v,idx+1,q);
    if(idx == v.size()) return -1;
}

void allOccurance(vector <int>&v,vector<int> &occ,int idx,int q){
    if(idx == v.size()) return;
    if(v[idx] == q) occ.push_back(idx);
    allOccurance(v,occ,idx+1,q);
    
}

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    int q; cin>>q;
    auto v = inputArr(n);
    
    cout<<firstOccurance(v,0,q)<<endl;
    cout<<lastOccurance(v,n-1,q)<<endl;
    
    return 0;
}
