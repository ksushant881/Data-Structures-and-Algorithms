#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    void dfs(vector<vector<char>>&board,int m,int n,int x,int y){
        if(x < 0 || y < 0 || x >= m || y >= n || board[x][y] != 'O') return;
        board[x][y] = 'B';
        for(int i=0;i<4;i++){
            dfs(board,m,n,x+dx[i],y+dy[i]);
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        //first and last row
        for(int i=0;i<n;i++){
            if(board[0][i] == 'O'){
                dfs(board,m,n,0,i);
            }
            if(board[m-1][i] == 'O'){
                dfs(board,m,n,m-1,i);
            }
        }
        //first and last column
        for(int i=0;i<m;i++){
            if(board[i][0] == 'O'){
                dfs(board,m,n,i,0);
            }
            if(board[i][n-1] == 'O'){
                dfs(board,m,n,i,n-1);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == 'B') board[i][j] = 'O';
            }
        }
    }
};

int main(){

}