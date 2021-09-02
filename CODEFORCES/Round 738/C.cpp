#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dfs(vector<vector<int>>&graph,vector<int>&path,vector<bool>&visited,int curr,int n){
    visited[curr]=true;
    path.push_back(curr);
    for(int i=1;i<n+2;i++){
        if(graph[curr][i] && !visited[i]) dfs(graph,path,visited,i,n);
    }
}

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;

vector<int>v(n+1);
for(int i=1;i<=n;i++) cin>>v[i];
// vector<vector<int>>graph(n+2,vector<int>(n+2,0));
// for(int i=1;i<=n-1;i++){
//     graph[i][i+1]=1;
// }
// for(int i=1;i<=n;i++){
//     if(v[i]==0) graph[i][n+1]=1;
//     else graph[n+1][i]=1;
// }

// for(auto x:graph){
//     for(auto y:x){
//         cout<<y<<" ";
//     }
//     cout<<endl;
// }
// cout<<"new"<<endl;

vector<int>path;
vector<int>res;
for(int i=n+1;i>=1;i--){
    vector<bool>visited(n+2,false);
    //dfs(graph,path,visited,i,n);
    if(path.size()==n+1) break;
    else path={};
}

// for(auto x:path){
//     cout<<x<<" ";
// }
// cout<<endl;
int pos=-1;
for(int i=1;i<=n;i++) if(v[i]==1) {
    pos=i;
    break;
}

for(int i=1;i<=n;i++){
    if(i==pos) cout<<n+1<<" "<<i<<" ";
    else cout<<i<<" ";
}
if(pos==-1) cout<<n+1;
cout<<endl;
}

}