#include<bits/stdc++.h>
using namespace std;

//TLE solution
    int M,N;
    int dfs(int i,int j){
        if(i==M-1 && j==N-1)
            return 1;
        if(i>M || j>N)
            return 0;
        return dfs(i+1,j)+dfs(i,j+1);
    }
    
    int uniquePaths(int m, int n) {
        M=m;
        N=n;
        return dfs(0,0);
    }

    //efficient solution using DP
    
            int uniquePaths(int m, int n) {
            int mat[m][n];
            if(m==1 && n==1)
                return 1;
            for(int i=1;i<m;i++){
                mat[i][0]=1;
            }
            for(int i=1;i<n;i++){
                mat[0][i]=1;
            }
            for(int i=1;i<m;i++){
                for(int j=1;j<n;j++){
                    mat[i][j]=(mat[i-1][j]+mat[i][j-1]);
                }
            }
            return mat[m-1][n-1];
        }

int main(){

}