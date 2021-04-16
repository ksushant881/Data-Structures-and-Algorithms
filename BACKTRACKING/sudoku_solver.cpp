#include<bits/stdc++.h>
using namespace std;

const int N=4;

bool isSafe(int i,int j,int n,int grid[][N]){
    for(int k=0;k<N;k++){
        if(grid[k][j]==n || grid[i][k]==n)
            return false;
    
        
    }
}

int main(){
    int grid[N][N]={
        {1,0,3,0},
        {0,0,2,1},
        {0,1,0,2},
        {2,4,0,0}
    };
}