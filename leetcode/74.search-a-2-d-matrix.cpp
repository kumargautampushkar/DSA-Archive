/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start

#include <iostream>
#include <vector>
using namespace std;



bool matrix_binary_search(vector <vector<int>> &v, int key){
    int m=v.size();
    int n=v[0].size();

    int low1=0,hi1=m-1;
    int mid1=(low1+hi1)/2;
    bool flag1=false;
    int row=-1;
    while(low1<hi1){
        mid1=(low1+hi1)/2;
        if(v[mid1][0]<= key && key<=v[mid1][n-1]){
            flag1=true;
            row=mid1;
            break;
        }
        else if(key<v[mid1][0] && key<v[mid1][n-1]){
            hi1=mid1-1;
        }
        else if(key>v[mid1][0] && key>v[mid1][n-1])
        {
            low1=mid1+1;
        }
    }
    cout<<row<<endl;
    if(flag1==false){
        return false;
    }

    bool flag2=false;
    int low=0,hi=n-1,mid=(low+hi)/2;
    int col=-1;
    while(low<hi){
        mid=(low+hi)/2;
        if(v[row][mid]==key){
            flag2=true;
            col=mid;
            break;
        }
        else if(key>v[row][mid]){
            low=mid+1;
        }
        else if(key<v[row][mid]){
            hi=mid-1;
        }
    }
    return flag2;
}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return matrix_binary_search(matrix,target);
    }
};
// @lc code=end

