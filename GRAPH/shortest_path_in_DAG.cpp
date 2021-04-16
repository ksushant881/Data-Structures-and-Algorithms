#include<iostream>
#include<queue>
using namespace std;

void topo(vector<int>adj[],int visited[],int indegree[],int s){
    visited[s]=true;

    queue<int>q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    while(q.empty()==false){
        int u=q.front();
        cout<<u<<" ";
        q.pop();
        for(int x:adj[u]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }

    }
}

void util(vector<int>adj[],int v){
    bool visited[v];
    int indegree[v];
    for(int i=0;i<v;i++){
        for(int x:adj[i])
            indegree[x]++;
    }
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            topo(adj,visited,indegree,i);
        }
    }
}