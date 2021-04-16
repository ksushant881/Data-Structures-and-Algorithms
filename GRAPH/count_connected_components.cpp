#include<iostream>
using namespace std;

void DFSrec(vector<int>adj[],int s,bool visited){
    visited[s]=true;
    //cout<<s<<" ";
    for(int x:adj[s]){
        if(visited[x]==false){
            
           DFSrec(adj,x,visited);
        }
    }
}

int DFSutil(vector<int>adj[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;

    }
    int count=0;
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            DFSrec(adj,i,visited);
            count++;
    }
    }
    return count;
}