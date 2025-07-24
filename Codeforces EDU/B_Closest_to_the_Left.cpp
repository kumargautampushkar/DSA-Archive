#include <bits/stdc++.h>
using namespace std;

vector <int> inputarr(int n){
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}

void printarr(vector <int> v){
    int n = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// bool binarySearch(vector <int> &v, int q){
//     int n = v.size();
//     int low = 0;
//     int hi = n-1;
//     bool found = false;
//     while(low<=hi){
//         int i_mid = (low+hi)/2;
//         if(v[i_mid] > q){
//             hi = i_mid -1;
//         }else if(v[i_mid] < q ){
//             low = i_mid+1;
//         }else{
//             found = true;
//             break;
//         }
//     }
//     return found;
// }

int binarySearch_LT(vector <int> &v, int q){
    
}


void solution(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    auto v = inputarr(n);
    // printarr(v);
    auto q = inputarr(k);
    // printarr(q);
    for(int i=0;i<q.size();i++){
        auto ans = false; //binarySearch(v,q[i]);
        if(ans== true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

int main(){
    solution();

}