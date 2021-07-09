#include<bits/stdc++.h>
using namespace std;

//recursive solution
//will give TLE for sure so i wont submit it
class Solution1 {
public:
    #define ll long long
    int res=0;
    void rec(int m,int n,int moves,vector<vector<ll>>&visited,int x,int y){  
        if(x<0 || x>m || y<0 || y>n){
            res++;
            return;
        }

        if(moves == 0){
            return;
        }

        rec(m,n,moves-1,visited,x-1,y);
        rec(m,n,moves-1,visited,x+1,y);
        rec(m,n,moves-1,visited,x,y-1);
        rec(m,n,moves-1,visited,x,y+1);
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<ll>>dp(m,vector<ll>(n,-1));
        rec(m-1,n-1,maxMove,dp,startRow,startColumn);
        return res;
    }
};

class Solution {
public:
    int mod = pow(10,9) + 7;
    int helperFunction(int row, int col, int maxMoves, int x, int y,  int moves, vector<vector<vector<int>>> & dp){
        if(x < 0 || y < 0 || x >= row || y >= col){
            return 1;
        }
        if(moves == maxMoves){
            return 0;
        }
        if(dp[moves][x][y] != -1){
            return dp[moves][x][y] % mod;
        }
        int tempVal = 0;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x, y - 1, moves + 1, dp)) % mod;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x - 1, y, moves + 1, dp)) % mod;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x + 1, y, moves + 1, dp)) % mod;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x, y + 1, moves + 1, dp)) % mod;
        dp[moves][x][y] = tempVal;
        return dp[moves][x][y] % mod;
    }
    int findPaths(int m, int n, int N, int i, int j) {
        vector<vector<vector<int>>> dp(N + 1, vector<vector<int>> (m + 1, vector<int> (n + 1, -1)));
        dp[N][m][n] = helperFunction(m, n, N, i, j, 0, dp);
        return dp[N][m][n];
    }
    
};

int main(){

Solution s;
cout<<s.findPaths(2,2,2,0,0);

}