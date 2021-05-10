#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dfs(vector<vector<int>>v,vector<bool>&visited,int curr){
    visited[curr-1]=true;

}

int main(){
fastio
 
int n;
cin>>n;
vector<vector<int>>v;
for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>y={a,b,c};
    v.push_back(y);
}

vector<bool>visited(n,false);

for(int i=0;i<n;i++){
    if(visited[v[i][1]]==false){
        dfs(v,visited,v[i][1]);
    }
    
}


}