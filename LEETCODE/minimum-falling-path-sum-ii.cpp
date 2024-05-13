#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<vector<int>>arr;
    int n;

    // dp[i][j] is the min sum till row i if jth column of row i is taken into the path
    int solve(int row, int col,vector<vector<int>>&dp){
        if(row == n) return 0;
        // cout<<row<<" "<<col<<endl;   

        if(dp[row][col] != -1) return dp[row][col];

        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            if(i!=col) {
                ans = min(ans, arr[row][col] + solve(row+1, i,dp));
                // cout<<arr[row][col]<<" "<<solve(row+1, i,dp)<<endl;
            }
        }
        return dp[row][col]=ans;
    }

    int minFallingPathSum(vector<vector<int>>& grid) {
        n = grid.size();
        if(n==1) return grid[0][0];
        arr = grid;

        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans = INT_MAX;
        for(int j=0;j<n;j++){
            ans = min(ans, solve(0,j,dp));
        }
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    cout<<s.minFallingPathSum(arr)<<endl;

    s = *(new Solution());
    arr={{7}};
    cout<<s.minFallingPathSum(arr)<<endl;
}