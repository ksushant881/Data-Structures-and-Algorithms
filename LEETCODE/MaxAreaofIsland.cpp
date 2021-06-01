#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>mat;
    int row,col;

    void bfs(int i,int j,int &size){
        //cout<<size<<"fun"<<endl;
        mat[i][j]=2;
        size++;
        if(i<row-1 && mat[i+1][j]==1) {bfs(i+1,j,size);}
        if(j<col-1 && mat[i][j+1]==1) {bfs(i,j+1,size);}
        if(i>0 && mat[i-1][j]==1) {bfs(i-1,j,size);}
        if(j>0 && mat[i][j-1]==1) {bfs(i,j-1,size);}
        return;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        row=grid.size();
        col=grid[0].size();
        mat=grid;
        int res=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    int s=0;
                    bfs(i,j,s);
                   // cout<<s<<"here"<<endl;
                    res=max(res,s);
                }
            }
        }
        return res;
    }
};

int main(){

vector<vector<int>>grid={
    {0,0,1,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,1,1,0,1,0,0,0,0,0,0,0,0},
    {0,1,0,0,1,1,0,0,1,0,1,0,0},
    {0,1,0,0,1,1,0,0,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,0,0,0,0,0,0,1,1,0,0,0,0}
};

vector<vector<int>>v={{0,0,0,0,0,0,0,0}};
Solution s;

cout<<s.maxAreaOfIsland(grid)<<endl<<s.maxAreaOfIsland(v)<<endl;

}