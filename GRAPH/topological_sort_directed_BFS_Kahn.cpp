#include<bits/stdc++.h>
#include<queue>
using namespace std;

void addEdge(vector<int>adj[],int v,int u){
    adj[v].push_back(u);
}

void BFS(vector<int>adj[],bool visited[],vector<int> indegree,int s){
    queue<int>q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){
            q.push(i);
        }
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

void BFSutil(vector<int>adj[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    //two ways to generate indegree array 1. from adjancecy list 2. from addEdge function
    //watch its a directed graph
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(int x:adj[i])
            indegree[x]++;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            BFS(adj,visited,indegree,i);
        }
    }
}

int main(){

}