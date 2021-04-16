#include<iostream>
using namespace std;

void DFSrec(vector<int>adj[],bool visited[],int s){
    visited[s]=true;
    cout<<s<<" ";
    for(int x:adj[s]){
        if(visited[x]==false)
            DFSrec(adj,visited,x);
    }
}

void DFSutil(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    DFSrec(adj,visited,s);
}