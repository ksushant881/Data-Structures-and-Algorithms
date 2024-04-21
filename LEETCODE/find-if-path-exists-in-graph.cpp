#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    void dfs(vector<vector<int>>&arr,long source,vector<bool>&visited, long destination,bool &ans){
        if(visited[source] or ans) return;
        
        visited[source]=true;
        if(source == destination){
            ans = true;
            return;
        }
        for(auto x:arr[source]){
            dfs(arr,x,visited,destination,ans);
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool>visited(n,false);
        
        vector<vector<int>>arr(n,vector<int>());
        
        for(long i=0;i<edges.size();i++){
            arr[edges[i][0]].push_back(edges[i][1]);
            arr[edges[i][1]].push_back(edges[i][0]);
        }
        
        bool ans=false;
        dfs(arr,source,visited,destination,ans);
        return ans;
    }
};

int main(){
    vector<vector<int>>edges={
        {0,1},{0,2},{3,5},{5,4},{4,3}
    };
    Solution s;
    cout<<s.validPath(6,edges,0,5);
}