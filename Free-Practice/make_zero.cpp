#include <bits/stdc++.h>
using namespace std;



vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    vector <pair<int,int>> zero_cord;
    int m = arr.size();
    int n = arr[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                pair<int,int> p;
                p.first = i;
                p.second = j;
                zero_cord.push_back(p);
            }
        }
    }
    for(int i=0;i<(int)zero_cord.size();i++){
        int rs = zero_cord[i].first;
        int cs = zero_cord[i].second;
        for(int c=0;c<n;c++){
            arr[rs][c] = 0;
        }
        for(int r=0;r<m;r++){
            arr[cs][r] = 0;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
