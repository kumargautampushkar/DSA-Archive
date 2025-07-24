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

void bubble_sort_rec(vector<int> &v, int n){
    if(n == 1){
        return;
    }
    for(int j =0;j<n-1;j++){
        if(v[j]>v[j+1])
            swap(v[j],v[j+1]);
    }
    bubble_sort_rec(v,n-1);
}

void bs(vector <int> &v, int n, int j){
    if(n == 1 || n ==0) return;
    if(j == n-1) {
        bs(v,n-1,0);
        return;
    }
    if(v[j]>v[j+1]) swap(v[j],v[j+1]);
    bs(v,n,j+1);
}

int main(){
    int n;
    cin>>n; 
    auto v = inputArr(n);
    bubble_sort_rec(v,n);
    printArr(v);

    int n1 ; cin>>n1;
    auto v1 = inputArr(n);
    bs(v1,n,0);
    printArr(v1);

    return 0;
}