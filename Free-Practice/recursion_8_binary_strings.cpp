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

void helper(vector<string> &v, string s,int idx){
    if(idx <= -1) return;
    string s1 = s,s2=s;
    s1[idx]='0';
    v.push_back(s1);
    s2[idx]='1';
    v.push_back(s2);
    helper(v,s1,idx-1);
    helper(v,s2,idx-2);
}

vector<string> binaryStrings(int n){
    // do not modify any default function or parameter you can use helper function if needed
    vector<string> v;
    string s = "";
    for(int i=0;i<n;i++){
        s.push_back('0');
    }
    helper(v,s,n-1);
    return v;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    auto ans = binaryStrings(n);
    printArr <string>(ans);
    return 0;
}
 