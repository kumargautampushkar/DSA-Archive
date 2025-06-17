#include <bits/stdc++.h>
using namespace std;

int mini_arr(vector<int>v,int i=0){
    
    if(i == v.size()-2){
        return min(v[i],v[i+1]);
    }

    return min(v[i],mini_arr(v,i+1));
}

int maxi_arr(vector<int>v,int i=0){
    
    if(i == v.size()-2){
        return max(v[i],v[i+1]);
    }

    return max(v[i],maxi_arr(v,i+1));
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<maxi_arr(v,0)<<endl;
    cout<<mini_arr(v,0)<<endl;

    return 0;
}