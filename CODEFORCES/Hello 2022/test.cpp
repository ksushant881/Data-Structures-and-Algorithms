#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int dfs(vector<vector<int>>g,int x,int y,int n,int m){
    int cnt=0;
    if(x!=0 && g[x-1][y]==1) cnt++;
    if(x!=n-1 && g[x+1][y]==1) cnt++;
    if(y!=0 && g[x][y-1]==1) cnt++;
    if(y!=m-1 && g[x][y+1]==1) cnt++;
    if(x!=0 && y!=0 && g[x-1][y-1]==1) cnt++;
    if(x!=0 && y!=m-1 && g[x-1][y+1]==1) cnt++;
    if(x!=n-1 && y!=0 && g[x+1][y-1]==1) cnt++;
    if(x!=n-1 && y!=m-1 && g[x+1][y+1]==1) cnt++;
    return cnt;
}

void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<vector<int>>g(n,vector<int>(m,0));
    f(i,k){
        int x,y;
        cin>>x>>y;
        g[x][y]=1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]==1) continue;
            else{
                int b=dfs(g,i,j,n,m);
                if(b==0) continue;
                cout<<i<<" "<<j<<" "<<b<<"\n";
            }
        }
    }
    
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}