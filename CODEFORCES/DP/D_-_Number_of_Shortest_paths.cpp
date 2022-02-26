#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,m;
vector<vector<int>>g(n+1);
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve(){
    cin>>n>>m;
    f(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int>q;
    vector<bool>vis(n+1,false);
    vis[1]=1;
    vector<int>dist(n+1,INT_MAX);
    dist[1]=0;
    q.push(1);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int i=0;i<g[curr].size();i++){
            dist[g[curr][i]] = min(dist[g[curr][i]],dist[curr]+1);
            q.push(g[curr][i]);
        }
    }
    for(auto x:dist)cout<<x<<" ";
    cout<<endl;


}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}