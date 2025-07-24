#include <bits/stdc++.h>
using namespace std;

template <typename T> vector <T> inputArr(int n){
    vector<T> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    return ans;
}

template <typename T> void printArr (vector <T> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

template <typename T> 
int bs(vector <T> &v, T q, int i, int j){
    if(i>j) return -1;
    int mid = (i+j)/2;
    if(v[mid] == q ) return mid;
    if (v[mid] >q) return bs(v,q,i,mid-1);
    if(v[mid] <q) return bs(v,q,mid+1,j);
    return -1;
}

template <typename T> 
int binarySearch(vector<T> v, T x){
    return bs<T>(v,x,0,v.size());
}


int main(int argc, char const *argv[])
{
    int n; cin>>n;
    int q; cin>>q;
    
    auto v = inputArr <int> (n);
    auto ans = binarySearch<int>(v,q);
    cout<<ans<<endl;
    
    return 0;
}
