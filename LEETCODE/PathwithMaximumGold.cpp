#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void dfs(vector<vector<int>>&g,int n,int m,vector<vector<bool>>&visited,int i,int j,int &curr,int &ans){
        ans=max(ans,curr);
        //visited[i][j]=true;
        //curr+=g[i][j];
        if(i+1<n && g[i+1][j]!=0 && !visited[i+1][j]){
            curr+=g[i+1][j];
            visited[i+1][j]=true;
            dfs(g,n,m,visited,i+1,j,curr,ans);
            visited[i+1][j]=false;
            curr-=g[i+1][j];
        }
        if(i-1>=0 && g[i-1][j]!=0 && !visited[i-1][j]){
            curr+=g[i-1][j];
            visited[i-1][j]=true;
            dfs(g,n,m,visited,i-1,j,curr,ans);
            visited[i-1][j]=false;
            curr-=g[i-1][j];
        }
        if(j+1<m && g[i][j+1]!=0 && !visited[i][j+1]){
            curr+=g[i][j+1];
            visited[i][j+1]=true;
            dfs(g,n,m,visited,i,j+1,curr,ans);
            visited[i][j+1]=false;
            curr-=g[i][j+1];
        }
        if(j-1>=0 && g[i][j-1]!=0 && !visited[i][j-1]){
            curr+=g[i][j-1];
            visited[i][j-1]=true;
            dfs(g,n,m,visited,i,j-1,curr,ans);
            visited[i][j-1]=false;
            curr-=g[i][j-1];
        }
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] != 0){
                    int curr=grid[i][j];
                    vector<vector<bool>>visited(n,vector<bool>(m,false));
                    visited[i][j]=true;
                    dfs(grid,n,m,visited,i,j,curr,ans);
                    //ans = max(ans,curr);
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>>g={
        {1,0,7,0,0,0},
        {2,0,6,0,1,0},
        {3,5,6,7,4,2},
        {4,3,1,0,2,0},
        {3,0,5,0,20,0}
    };
    Solution s;
    cout<<s.getMaximumGold(g);

}