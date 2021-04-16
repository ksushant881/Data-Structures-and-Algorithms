#include<iostream>
#include<queue>
using namespace std;

//incomplete
//watch tutorial again
void kahn(vector<int>adj[],bool visited[],int indegree[],int s,int v){
    visited[s]=true;
    queue<int>q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(q.empty()==false){
        int u=q.front();
        cout<<u<<" ";
        q.pop();
    for(int x:adj[u]){
        if(visited[x]==false){
            indegree[x]--;
            if(indegree[x]==0){
            visited[x]=true;
            q.push(x);
            }
            
        }
    }
    }
}

void BFSutil(vector<int>adj[],int v){
    bool visited[v];
    int indegree[v]={0};
    for(int i=0;i<v;i++){
        for(int x:adj[i]){
            indegree[x]++;
        }
    }
    for(int i=0;i<v;i++){
        visited[i]=false;

    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            kahn(adj,visited,indegree,i,v);
        }
    }
}

void addEdge(vector<int>adj[],int v,int u){
    //making a directed graph
    adj[v].push_back(u);
    //adj[u].push_back(v);
}

int main(){
    int v=5;
   // int V=5;
	vector<int> adj[v];
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1); 
    BFSutil(adj,v); 

}