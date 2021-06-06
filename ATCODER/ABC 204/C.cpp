#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int dfs(int i,vector<vector<int>>&v,vector<bool>&visited,int &count){
    visited[i]=true;
    for(int k=0;k<v[i].size();k++){
        if(visited[v[i][k]]==false){
            count++;
            visited[v[i][k]]=true;
            dfs(v[i][k],v,visited,count);
        }
    }
    return count;
}

int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int n,m;
cin>>n>>m;
vector<vector<int>>v(n);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    v[a-1].push_back(b-1);
}

int ans=0;

for(int i=0;i<n;i++){
    vector<bool>visited(n,false);
    int res=0;
    ans+=dfs(i,v,visited,res);
}
ans+=n;
cout<<ans;
}
}