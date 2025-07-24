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
void merge(vector <T> &v,int l, int r){
    vector <T> ans;
    // Two array portion, left->mid-1  and mid-> right
    // 2 4 6 8  ::: 
    // 1 3 5 7 9 11
    int i = l;
    int m = (l+r)/2;
    int j = m+1;

    while (i<=m and j<=r){
        if(v[i] <v[j]){
            ans.push_back(v[i]);
            i++;
        }else{
            ans.push_back(v[j]);
            j++;
        }
    }
    // copy remaining element from first subarr;
    while(i<=m){
        ans.push_back(v[i]);
        i++;
    }
    // copy remaining  element form second subarr;
    while(j<=r){
        ans.push_back(v[j]);
        j++;
    }
    int k =0;
    for(int i=l;i<=r;i++){
        v[i] = ans[k++];
    }
    return;

};

template <typename T>
void mergeSortHelper(vector<T> &v,int l, int r){
    if(l >= r) return;
    int mid = (l+r)/2;
    mergeSortHelper(v,l,mid);
    mergeSortHelper(v,mid+1,r);
    merge <T>(v,l,r);
}


template <typename T> 
void mergeSort(vector <T> &v){
    int n = v.size();
    mergeSortHelper<T>(v,0,n-1);
}

int main(){
    int n;cin>>n;
    auto v = inputArr <int> (n);
    mergeSort<int>(v);   
    printArr<int>(v);
    return 0;
}