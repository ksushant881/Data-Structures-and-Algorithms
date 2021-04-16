#include<iostream>
#include<queue>
using namespace std;

void BFS(vector<int>ajd[],int v,int s,bool visited[]){
    queue<int>q;
   
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.top();
        q.pop();
        cout<<u<<" ";
        for(int v:ajd[u]){
            q.push(v);
            visited[v]=true;
        }
    }
}

void BFSdis(vector<int>adj[],int v){
    bool visited[v];
     for(int i=0;i<v;;i++)
        visited[i]=false;
    for(int i=0;i<v;i++){
        if(visited[i]==false)
            BFS(adj,v,i,visited);
    }

}