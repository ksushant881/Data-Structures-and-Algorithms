#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    if(i==0 or (i>0 and grid[i-1][j]==0)) ans++;
                    if(i==n-1 or (i<n-1 and grid[i+1][j]==0)) ans++;
                    if(j==0 or (j>0 and grid[i][j-1]==0)) ans++;
                    if(j==m-1 or (j<m-1 and grid[i][j+1]==0)) ans++;
                }
            }
        }
        return ans;
    }
};

int main(){
    
}