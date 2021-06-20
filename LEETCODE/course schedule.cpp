#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//BFS solution
class BFS {
    private:
    vector<vector<int>> build(int nodes,vector<vector<int>>p){
    vector<vector<int>>adj(nodes);
    for(int i=0;i<p.size();i++){
        adj[p[i][1]].push_back(p[i][0]);
    }
    return adj;
}

bool help(int nodes,vector<vector<int>>adj,vector<int>&indegree){
    queue<int>q;
    int count=0;
    for(int i=0;i<nodes;i++){
        if(indegree[i]==0){
            q.push(i);
        }   
    }
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        for(int x:adj[u]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);     
            } 
        }
        count++;
    }
    return count==nodes;
}

bool bfs(int nodes,vector<vector<int>>adj){
    vector<int>indegree(nodes,0);
    for(int i=0;i<nodes;i++){
        for(int x:adj[i])
            indegree[x]++;
    }
    return help(nodes,adj,indegree);
    
}
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj=build(numCourses,prerequisites);
        return bfs(numCourses,adj);
    }
};

//DFS solution
class DFS {
    private:
    vector<vector<int>> build(int numCourses, vector<vector<int>>& p){
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<p.size();i++){
            adj[p[i][1]].push_back(p[i][0]);
        }
        return adj;
    }
    
    bool dfsUtil(vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&recSt,int curr){
    visited[curr]=true;
    recSt[curr]=true;
    for(int x:adj[curr]){
        if(visited[x]==false && dfsUtil(adj,visited,recSt,x)==true)
            return true;
        else if(recSt[x]==true)
            return true;
    }
    recSt[curr]=false;
    return false;
}

bool dfs(vector<vector<int>>&adj,int nodes){
    vector<bool>visited(nodes,false);
    vector<bool>recSt(nodes,false);
    for(int i=0;i<nodes;i++){
        if(visited[i]==false){
            if(dfsUtil(adj,visited,recSt,i)==true)
                return false;
        }
    }
    return true;
}
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj=build(numCourses,prerequisites);
        return dfs(adj,numCourses);
    }
};



int main(){
fastio

}