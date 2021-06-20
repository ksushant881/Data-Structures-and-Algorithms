#include<bits/stdc++.h>
using namespace std;

class Solution2 {
public:
    bool bfs(vector<vector<int>>&g,vector<int>&colour,int curr){
        for(int i=0;i<g[curr].size();i++){
            if(colour[i]==0){
                if(colour[curr]==1) colour[g[curr][i]]=-1;
                if(colour[curr]==-1) colour[g[curr][i]]=1;
            }
                
            else if(colour[i]==colour[curr])
                return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colour(n,0);
        for(int i=0;i<n;i++){
            if(colour[i]==0) {colour[i]=-1;
            if(!bfs(graph,colour,i)) return false;}
        }
        return true;
    }
};

class Solution {
public:
    bool isBipartitHelp(vector<vector<int>>& graph,int i) {
        queue<int>q;
        q.push(i);

        int n=graph.size();
        vector<int>colour(n,0);
        colour[i]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int i=0;i<graph[curr].size();i++){
                if(colour[graph[curr][i]]==0){
                    colour[graph[curr][i]]=-colour[curr];
                    q.push(graph[curr][i]);
                }
                else if(colour[graph[curr][i]]==colour[curr]){
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        for (int i=0;i<n;i++) {
            if (!isBipartitHelp(graph, i)) return false;
        }
        return true;
    }
};

int main(){

vector<vector<int>>v={
    {},
    {2,4,6},
    {1,4,8,9},
    {7,8},
    {1,2,8,9},
    {6,9},
    {1,5,7,8,9},
    {3,6,9},
    {2,3,4,6,9},
    {2,4,5,6,7,8}
};
Solution s;
cout<<s.isBipartite(v);
}