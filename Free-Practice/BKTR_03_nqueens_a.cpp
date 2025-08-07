#include <bits/stdc++.h>
using namespace std;

void printBoard(vector <vector<int>> &v, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>> inputBoard(int m){
    return vector<vector<int>> (m,vector<int>(m,0));
}

bool canPlace(vector<vector<int>> &board,int p, int q, int n){
    bool ans=true;
    // bool vert = false;
    // bool hor = false;
    // diag = false;

    for(int i=0;i<p;i++){
        if(board[i][q]==1) return false;
    }

    for(int j=0;j<q;j++){
        if(board[p][j]==1) return false;
    }
    
    int i=p-1;int j=q-1;
    while(i>=0 && j>=0){
        if(board[i][j]==1) return false;
        i--;j--;
    }

    i=p-1;
    j=q+1;
    while(i>=0 && j<n){
        if(board[i][j]==1) return false;
        i--;j++;
    }
    return ans;
}


bool solveBoard(int n, vector <vector<int>> &board, int i){
    if(i==n){
        printBoard(board,n,n);
        return true;
    }

    for(int j = 0;j<n;j++){
        // check if j is safe or not
        bool canPlaceable = canPlace(board,i,j,n);
        // if safe, place queen and go to next recursive call, move next
        if(canPlaceable){
            board[i][j]=1;
            bool success = solveBoard(n,board,i+1);
            if(success) return true;
            board[i][j]=0;
        }
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    auto board = inputBoard(n);
    auto ans = solveBoard(n,board,0);
    // printBoard(board,n,n);
    return 0;
}
