#include<iostream>
#include<vector>
using namespace std;

bool DFS(vector<int>adj[],int s,bool visited[],bool recst[]){
    visited[s]=true;
    recst[s]=true;
    for(int x:adj[s]){
        if(visited[x]==false && DFS(adj,x,visited,recst))
            return true;
        else if(recst[x]==true)
            return true;
    }
    recst[s]=false;
    return false;
}

bool DFSutil(vector<int>adj[],int v){
    bool visited[v];
    bool recst[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        recst[i]=false;
    }

    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFS(adj,i,visited,recst)==true){
                return true;
            }
        }
    }
    return false;
}