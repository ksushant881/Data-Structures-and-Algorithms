#include<iostream>
using namespace std;

bool DFS(vector<int>adj[],int s,bool visited[],int parent){
    visited[s]=true;
    //cout<<s<<" ";
    for(int x:adj[s]){
        if(visited[x]==false){
            if(DFS(adj,x,visited,s)==true){
                return true;
            }
            else if(x!=parent){
                return true;    
            }
        }
    }
    return false;
}

bool DFSutil(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFS(adj,i,visited,-1)==true)
                return true;
        }
    }
    return false;
}

