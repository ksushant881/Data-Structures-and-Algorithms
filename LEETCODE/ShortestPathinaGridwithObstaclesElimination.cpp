#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int ans;
    void solve(vector<vector<int>>&grid, int x, int y, int k, int steps,int m, int n) {
        if(x == m-1 and y == n-1) {
            ans = min(ans,steps);
            return;
        }
        if(x+1 != m and y+1 != n and x-1 != -1 and y-1 != -1){
            if(grid[x+1][y] == 1){
                solve(grid,x+1,y,k-1)
            }
        }
        
    }
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid[0].size();
        int n = grid.size();
        
        ans = INT_MAX;
        solve(grid,0,0,k,0,m,n);
    }
};

int main(){
    
}