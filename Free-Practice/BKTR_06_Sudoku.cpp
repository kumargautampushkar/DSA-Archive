#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> inputSudoku(void){
    vector <vector<int>> sudoku(9,vector <int> (9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>sudoku[i][j];
        }
    }
    return sudoku;
}

void printSudoku(vector<vector<int>> &sudoku){
    assert(sudoku.size()==9);
    assert(sudoku[0].size()==9);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}



int main(int argc, char const *argv[])
{
    auto board = inputSudoku();
    printSudoku(board);
    return 0;
}
