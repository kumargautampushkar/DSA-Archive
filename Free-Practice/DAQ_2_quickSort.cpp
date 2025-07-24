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

/*
1. Choose pivot p, could be first, middle or last element or random element
2. Do partition
    a.Put all elements less than p in left side of p
    b.Put all the elements greater than p in right side of p
3. Recursively sort left and right parts    

Base case,
    if array contains (1 <= )element return

*/

template <typename T>
int partition(vector<T> &v, int l, int r){
    T pivot = v[r];
    int i=l,j=r-1;
    while(i<=j){
        while(i <= j && v[i] < pivot) i++; 
        while(i <= j && v[j] > pivot) j--;
        if(i<=j){
            swap(v[i],v[j]);
            i++;
            j--;
        }   
    }
    swap(v[r],v[i]);
    return i;
}

template <typename T>
void qs(vector <T> &v,int l, int r){
    if(l>=r) return;
    int pi = partition(v,l,r);
    qs(v,l,pi-1);
    qs(v,pi+1,r);
}

template <typename T>
void quicksort(vector <T> &v){
    int l = v.size()-1;
    qs(v,0,l);
}


int main(int argc, char const *argv[])
{
    int n;cin>>n;
    auto v = inputArr <int> (n);
    quicksort<int>(v);
    printArr<int> (v);
    return 0;
}
