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

bool isSafe(vector<vector<int>> &sudoku,int i, int j, int num){

    // check for row and column
    for(int w=0;w<9;w++){
        if(sudoku[w][j] == num || sudoku[i][w] == num) return false;
    }

    int sx = (i/3)*3;
    int sy = (j/3)*3;

    for(int p = sx;p<sx+3;p++){
        for(int q = sy;q<sy+3;q++){
            if(sudoku[p][q]== num)
                return false;
        }
    }

    return true;

}

int main(int argc, char const *argv[])
{
    auto board = inputSudoku();
    printSudoku(board);
    return 0;
}
