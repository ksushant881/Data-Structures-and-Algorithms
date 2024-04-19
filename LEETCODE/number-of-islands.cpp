#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid, int n, int m){
        grid[i][j]=-1;
        if(i>0 and grid[i-1][j] == '1'){
            dfs(i-1,j,grid,n,m);
        }
        if(i<n-1 and grid[i+1][j] == '1'){
            dfs(i+1,j,grid,n,m);
        }
        if(j>0 and grid[i][j-1] == '1'){
            dfs(i,j-1,grid,n,m);
        }
        if(j<m-1 and grid[i][j+1] == '1'){
            dfs(i,j+1,grid,n,m);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(i,j,grid,n,m);
                }
            }
        }
        return ans;
    }
};

int main(){
    
}