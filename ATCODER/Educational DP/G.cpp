#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//recursive solution
//simple dfs on every node till we reach a node with 0 outdegree (means and end point)
ll dfs(vector<vector<ll>>&adj,vector<bool>&visited,ll currNode,ll depth){
    if(adj[currNode].size()==0) {
        return depth;
    }
    visited[currNode]=true;
    ll res=0;
    for(ll i=0;i<adj[currNode].size();i++){
        res=max(res,dfs(adj,visited,adj[currNode][i],depth+1));
    }
    return res;
}

ll solve(ll n,ll m,vector<pair<ll,ll>>&g){
    vector<vector<ll>>adj(n+1);
    for(ll i=0;i<m;i++){
        adj[g[i].first].push_back(g[i].second);
    }

    ll ans=0;
    for(ll i=1;i<=n;i++){
        vector<bool>visited(n+1,false);
        ans = max(ans,dfs(adj,visited,i,0));
    }
    return ans;
}
//end of recursive solution


//dp solution
//clearly there are overlapping subproblems where we repeatedly calculate the depth from one node
//which has been calculated before
void dfsForDP(vector<vector<ll>>&adj,vector<bool>&visited,ll currNode,ll depth,vector<ll>&dp){
    visited[currNode] = true;
    dp[currNode] = 0;
    for(ll i=0;i<adj[currNode].size();i++){
        if(!visited[adj[currNode][i]]){
            dfsForDP(adj,visited,adj[currNode][i],depth+1,dp);
        }
        dp[currNode] = max(dp[currNode],1+dp[adj[currNode][i]]);
    }
}

ll solvedp(ll n,ll m,vector<pair<ll,ll>>&g){

    vector<vector<ll>>adj(n+1);
    for(ll i=0;i<m;i++){
        adj[g[i].first].push_back(g[i].second);
    }

    vector<ll>dp(n+1,-1);
    ll ans=0;
    vector<bool>visited(n+1,false);
    for(ll i=1;i<=n;i++){
        if(!visited[i]){
            dfsForDP(adj,visited,i,0,dp);
        }
    }

    for(ll i=1;i<=n;i++){
        ans = max(ans , dp[i]);
    }
    return ans;
}

int main(){
fastio

ll tc=1;
//cin >> tc;
for(ll casess=0;casess<tc;casess++){

ll n,m;
cin>>n>>m;
vector<pair<ll,ll>>g(m);
for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    g[i]={a,b};
}
//cout<<solve(n,m,g);
cout<<solvedp(n,m,g);

}
}