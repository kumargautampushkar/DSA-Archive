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


// RAS stands for Rotated Array Search
/*
8 4
4 5 6 7 0 1 2 3
ANS: 1

It should perform binary search on this rotated array
*/

int ras(vector <int> &v, int q){
    int n = v.size();
    int first= 0, last= n-1;
    int i=0;
    int j=n-1;
    int ans = -1;
    while(i<=j){
        int mid = i+(i-j)/2;
        if(v[mid]==q) return ans;
        
        // Array's  first section
        if(mid >= v[0]){
            if(q<v[mid] && q>v[0]){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        // Array's second section
        else{
            if(q>v[mid] && q<v[n-1]){
                i = mid+1;           
            }else{
                j = mid-1;
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    int q; cin>>q;
    auto v = inputArr<int>(n);
    auto ans = ras(v,q);
    cout<<ans<<endl;    
    return 0;
}
