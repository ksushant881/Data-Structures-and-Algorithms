#include<iostream>
#include<queue>
using namespace std;


//
void shortest(vector<int>adj[],int v,int s,int dist[]){
    //int dist[v]={INFINITY};
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int>q;
    q.push(s);
    visited[s]=true;

    while(q.empty()==false){
        int u=q.front();
        q.pop();
       // cout<<u<<" ";
        for(int x:adj[u]){
            if(visited[x]==false){
            dist[x]=dist[u]+1;
            q.push(x);
            visited[x]=true;
        }
        }
    }
    
}

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int V=4;
    vector<int>adj[V];
    addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,0,2); 
	addEdge(adj,1,3);
    int dist[V];
    for(int i=0;i<V;i++){
        dist[i]=INT16_MAX;
    }
	dist[0]=0;
	shortest(adj,V,0,dist); 
    for(int i=0;i<V;i++){
        cout<<dist[i]<<" ";
    }
}