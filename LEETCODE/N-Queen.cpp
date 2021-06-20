#include<bits/stdc++.h>
using namespace std;

void print(vector<string>v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    cout<<"------NEW------"<<endl;
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        for(int j=0;j<n;j++) s+='.';
        vector<string>v(n);
        vector<vector<string>>res;
        for(int i=0;i<n;i++) v[i]=s;
        solve(v,n,0,res);
        return res;
    }

bool check(vector<string>v,int n,int row,int col){
    for(int i=0;i<col;i++){
        if(v[row][i]=='Q') return false;
    }
    for(int k=1;k<n;k++){
        if(row-k>=0 && col-k>=0 && v[row-k][col-k]=='Q') return false;
        if(row+k<n && col-k>=0 && v[row+k][col-k]=='Q') return false;
    }
    return true;
}

void solve(vector<string>&v,int n,int col,vector<vector<string>>&res){
    if(col==n){
        res.push_back(v);
        return;
    }
    for(int i=0;i<n;i++){
        if(check(v,n,i,col)){
            v[i][col]='Q';
            solve(v,n,col+1,res);
            v[i][col]='.';
        }
    }
}
};

int main(){

Solution s;
vector<vector<string>>res=s.solveNQueens(4);
    for(int i=0;i<res.size();i++){
        print(res[i]);
    }
}