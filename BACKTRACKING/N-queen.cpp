#include<bits/stdc++.h>
using namespace std;

//super naive solution

void print(vector<string>v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    cout<<"------NEW------"<<endl;
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

void solveNQueen(vector<string>&v,int n,int col,vector<vector<string>>&res){
    if(col==n){
        res.push_back(v);
        return;
    }
    for(int i=0;i<n;i++){
        if(check(v,n,i,col)){
            v[i][col]='Q';
            solveNQueen(v,n,col+1,res);
            v[i][col]='.';
        }
    }
}


int main(){

    int n=4;
    string s="";
    for(int j=0;j<n;j++) s+=' ';
    vector<string>v(n);
    vector<vector<string>>res;
    for(int i=0;i<n;i++) v[i]=s;
    solveNQueen(v,n,0,res);
    for(int i=0;i<res.size();i++){
        print(res[i]);
    }


}