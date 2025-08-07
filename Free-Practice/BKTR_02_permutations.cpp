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


void permutations(string &input, int idx, vector<string> &result) {

    if (idx == input.size()) {
        result.push_back(input);    
        return;
    }
    
    for(int i = idx;i<input.size();i++){
        swap(input[i], input[idx]);
        permutations(input, idx + 1, result);
        swap(input[i], input[idx]); // backtrack
    }
}


vector <string> permutationsArray(string input, bool isSorted = false) {
    vector<string> result;
    permutations(input, 0, result);
    if(isSorted)
        sort(result.begin(), result.end());
    return result;
}

int main(){
    string input;
    cin >> input;
    auto v = permutationsArray(input);
    printArr<string>(v);

    return 0;
}