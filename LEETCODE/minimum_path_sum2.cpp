#include<bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int mat[m][n];
        mat[0][0]=grid[0][0];
        cout<<mat[0][0];
        for(int i=1;i<n;i++){
            mat[0][i]=grid[0][i]+mat[0][i-1];
        }
        for(int i=1;i<m;i++){
            mat[i][0]=grid[i][0]+mat[i-1][0];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                mat[i][j]=grid[i][j]+min(mat[i-1][j],mat[i][j-1]);
            }
        }
        // for(int i=1;i<m;i++){
        //     for(int j=1;j<n;j++){
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return mat[m-1][n-1];
        
    }

int main(){
    
}