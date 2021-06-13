#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//recursive solution
void dfs(vector<vector<char>>&grid,int i,int j,ll &paths){
    if( i == grid.size()-1 && j == grid[0].size()-1 ){
        paths = (paths+1)%mod;
        return;
    }
    if(i != grid.size()-1 && grid[i+1][j] == '.') dfs(grid,i+1,j,paths);
    if(j != grid[0].size()-1 && grid[i][j+1] == '.') dfs(grid,i,j+1,paths);
}

int solve(vector<vector<char>>&grid){
    int row=grid.size();
    int col=grid[0].size();
    vector<vector<int>>dp(row,vector<int>(col,0));

    for(int i=row-1;i>=0;i--){
        if(grid[i][col-1] == '.') dp[i][col-1]=1;
        else break;
    }

    for(int i=col-1;i>=0;i--){
        if(grid[row-1][i] == '.') dp[row-1][i]=1;
        else break;
    }

    for(int i=row-2;i>=0;i--){
        for(int j=col-2;j>=0;j--){
            if(grid[i][j]=='.') dp[i][j] = (dp[i+1][j]+dp[i][j+1])%mod;
        }
    }
    return dp[0][0]%mod;
}

int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int h,w;
cin>>h>>w;
vector<vector<char>>grid(h,vector<char>(w));
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cin>>grid[i][j];
    }
}
ll ans=0;
//dfs(grid,0,0,ans);
//cout<<ans;
cout<<solve(grid);


}
}