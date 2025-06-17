#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp  = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void vertical_mirror(vector<vector<int>> &matrix){
    int n = matrix.size();
    for (int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-1-j];
            matrix[i][n-1-j] = temp;
        }
    }
}

void rotate(vector<vector<int>>& matrix) {
      // your code goes here

}

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector <vector<int>> v(n, vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    // vector <vector<int>> v(n, vector<int> (n,0));
    transpose(v);
    vertical_mirror(v);  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

