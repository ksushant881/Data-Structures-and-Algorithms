#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isSafe(vector<vector<int>>&v,int n,int row,int col){
        for(int i=0;i<col;i++) if(v[row][i]==1) return false;
        for(int i=1;i<n;i++){
            if(i<=row && i<=col && (v[row-i][col-i]==1)){
                return false;
            }
            if(i+row<n && i<=col && (v[row+i][col-i]==1)){
                return false;
            }
        }
        return true;
    }
    
    void solve(vector<vector<int>>&v,int n,int col,vector<vector<vector<int>>>&res){
        if(col==n){
            res.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(v,n,i,col)){
                v[i][col]=1;
                solve(v,n,col+1,res);
                v[i][col]=0;
            }
        }
    }
    
    int totalNQueens(int n) {
        vector<vector<vector<int>>>res;
        vector<vector<int>>v(n,vector<int>(n,0));
        solve(v,n,0,res);
        return res.size();
        
    }
};

int main(){

Solution s;
cout<<s.totalNQueens(4);

}