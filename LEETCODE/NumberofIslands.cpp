#include<bits/stdc++.h>
using namespace std;

class Solution {
        int row,col;
    void dfs(int i,int j,vector<vector<char>>& grid){     
        if(i-1 >= 0 && grid[i-1][j] == '1'){
            grid[i-1][j] = '2';
            dfs(i-1,j,grid);
        }
        if(i+1 < row  && grid[i+1][j] == '1'){
            grid[i+1][j] = '2';
             dfs(i+1,j,grid);
        }
        if(j+1 < col && grid[i][j+1] == '1'){
            grid[i][j+1] = '2';
             dfs(i,j+1,grid);
        }
        if(j-1 >= 0 && grid[i][j-1] == '1'){
            grid[i][j-1] = '2';
             dfs(i,j-1,grid);
        }    
    }
public:

    
    int numIslands(vector<vector<char>>& grid) {
        int islands=0;
        int R = grid.size();
        int C = grid[0].size();
        row = R;
        col = C;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(grid[i][j] == '1'){
                    grid[i][j] = '2';
                    islands++;
                    dfs(i,j,grid);
                }
            }
        }
        return islands;
    }
};

int main(){



}