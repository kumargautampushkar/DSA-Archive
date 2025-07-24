#include <bits/stdc++.h>
using namespace std;

bool isSortedArray(vector <int> v, int i,int n){
    if (i==n-1)
        return true;
    
    if(v[i]<v[i+1] && isSortedArray(v,i+1,n)){
        return true; 
    };
    return false;                                                
    
}

vector <int> inputArr(int n){
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}

vector <int> printArr(vector <int> &v){
    for(auto &it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    auto v = inputArr(n);
    cout<<isSortedArray(v,0,n)<<endl;
    return 0;
}