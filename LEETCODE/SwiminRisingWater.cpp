#include<bits/stdc++.h>
using namespace std;



//brute force TLE solution
//go through all paths and choose which path has the minimum maximum intermediate value
//e.g. path1 = 4 6 3 7 8 ==> max intermediate value:8
//path2 = 5 8 2 10 6 4 ==> max intermediate value:10
// overallAns = min(path1 min intermediate value , path2 min intermediate value) == path1 ==> 8

class Solution1 {
public:
    void dfs(vector<vector<int>>&grid,vector<vector<bool>>visited,int n,int currMaxinThisPath,int i,int j,int &overallAns){
        if(i<0 || j<0 || i>=n || j>=n  || visited[i][j]) return;
        if(i==n-1 && j==n-1) {
            currMaxinThisPath = max(currMaxinThisPath,grid[i][j]);
            overallAns = min(currMaxinThisPath,overallAns);
            return;
        }
        visited[i][j]=1;
        currMaxinThisPath = max(currMaxinThisPath,grid[i][j]);
        dfs(grid,visited,n,currMaxinThisPath,i+1,j,overallAns);
        dfs(grid,visited,n,currMaxinThisPath,i-1,j,overallAns);
        dfs(grid,visited,n,currMaxinThisPath,i,j-1,overallAns);
        dfs(grid,visited,n,currMaxinThisPath,i,j+1,overallAns);
    }
    
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        int currMaxinThisPath=INT_MIN;
        int overallAns=INT_MAX;
        dfs(grid,visited,n,currMaxinThisPath,0,0,overallAns);
        return overallAns;
    }
};

//optimization using binary search
class Solution {
public:
    vector<vector<int>>directions={
        {0,1},
        {0,-1},
        {1,0},
        {-1,0}
    };

    bool dfs(vector<vector<int>>&grid,vector<vector<bool>>&visited,int n,int i,int j,int mid){
        visited[i][j] = true;
        for(auto d:directions){
            int r=i+d[0];
            int c=j+d[1];
            if(r>=0 && c>=0 && r<n && c<n && grid[r][c]<=mid && !visited[r][c]){
                if(r==n-1 && c==n-1) return true;
                if(dfs(grid,visited,n,r,c,mid)) return true;
            }
        }
        return false;
    }

    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int high = n*n - 1;
        int low = grid[0][0];
        while(high > low){
            int mid = low +(high - low)/2;
            vector<vector<bool>>visited(n,vector<bool>(n,false));
            if(dfs(grid,visited,n,0,0,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

int main(){

    vector<vector<int>>grid1={
        {0,1,2,3,4},
        {24,23,22,21,5},
        {12,13,14,15,16},
        {11,17,18,19,20},
        {10,9,8,7,6}
    };
    vector<vector<int>>grid2={
        {10,12,4,6},
        {9,11,3,5},
        {1,7,13,8},
        {2,0,15,14}
    };
    Solution s;
    cout<<s.swimInWater(grid2);

}