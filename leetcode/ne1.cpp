#include <bits/stdc++.h>
using namespace std;
int digits(int n)
{
    int largest = 0;
    while (n) {
        int r = n % 10;
        largest = max(r, largest);
        n = n / 10;
    }
    return largest;
}

int maxsum(vector <int> &v){
    int n=v.size();
    int ans=-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int k1=digits(v[i]);
            int k2=digits(v[j]);
            if(k1==k2){
                ans=max(ans,v[i]+v[j]);
            }
        }
        
    }
    
    return ans;
}

void inputarr(vector <int> &v,int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
}

void printarr(vector <int> &v){
    for(auto &it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    inputarr(v,n);
    //printarr(v);
    cout<<maxsum(v)<<endl;
    //int ww;
    // cin>>ww;
    // cout<<digits(ww)<<endl;
    return 0;
}