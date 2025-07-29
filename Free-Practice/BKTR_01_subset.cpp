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

void findSubsets(char * input, char* output, int i, int j, vector<string> &v)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        v.push_back(output);
        return;
    }
        
    output[j] = input[i];
    
    // Include the current character
    findSubsets(input, output, i + 1, j+1,v);
    // Exclude the current character
    findSubsets(input, output, i + 1, j,v);
}

void findSubsets2(char * input, char* output, int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if(output[0] == '\0') {
            cout << "NULL" << endl;
            return;
        }
        cout << output << endl;
        return;
    }
        
    
    // Include the current character
    findSubsets2(input, output, i + 1, j);
    output[j] = input[i];
    // Exclude the current character
    findSubsets2(input, output, i + 1, j+1);
}

bool compare(string &a, string &b) {
    if (a.length() == b.length()) {
        return a < b; // lexicographical order
    }
    return a.length() < b.length(); // shorter strings first
}

int main(int argc, char const *argv[])
{
    char input[1000],output[1000];
    cin >> input;
    vector<string> v;
    findSubsets(input, output, 0, 0,v);
    printArr(v);
    sort(v.begin(), v.end(),compare);
    printArr(v);
    //findSubsets2(input, output, 0, 0);
    return 0;
}
