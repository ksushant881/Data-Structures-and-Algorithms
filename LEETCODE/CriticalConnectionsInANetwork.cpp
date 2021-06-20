#include<bits/stdc++.h>
using namespace std;

    class Solution {
    public:
        int time=0;
        void dfs(int u,vector<vector<int>>&graph,vector<int>&disc,vector<int>&parent,vector<int>&low,vector<vector<int>>&ans) {
            disc[u]=low[u]=time++;

            int x=graph[u].size();
            for(int i=0;i<x;i++){
                int v=graph[u][i];
                if(disc[v]==-1){
                    parent[v]=u;
                    dfs(v,graph,disc,parent,low,ans);

                    if(low[v]>disc[u])
                        ans.push_back({u,v});

                    low[u]=min(low[u],low[v]);
                }
                else if(v!=parent[u])
                    low[u]=min(low[u],low[v]);
            }
        }

        vector<vector<int>> criticalConnections(int n, vector<vector<int>>& con) {
            vector<vector<int>>ans;

            vector<vector<int>>graph(n);
            vector<int>parent(n,-1);
            vector<int>low(n,-1);
            vector<int>disc(n,-1);

            for(auto v:con){
                graph[v[0]].push_back(v[1]);
                graph[v[1]].push_back(v[0]);
            }

            for(int v=0;v<n;v++){
                if(disc[v]==-1)
                    dfs(v,graph,disc,parent,low,ans);
            }
            return ans;
        }
    };

int main(){



}