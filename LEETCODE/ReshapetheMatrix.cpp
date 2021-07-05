#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>res(r,vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        if(r*c != m*n){
            return mat;   
        }
        
        int row=0,col=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j] = mat[row][col];
                col++;
                if(col==n){
                    row++;
                    col=0;
                }
            }
        }
        
        return res;
    }
};

int main(){



}