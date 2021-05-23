#include<bits/stdc++.h>
using namespace std;


class graph{
    public:
        int v;
        vector<int>*adj;

        void addEdge(int x, int y){
            adj[x].push_back(y);
            adj[y].push_back(x); 
        }

        graph(int x){
            this->v=x;
            adj = new vector<int>[v];
        }

        void articulationPoint();
        void help(int u,vector<bool>&visited,vector<int>&disc,vector<int>&low,vector<int>&parent,vector<bool>&ap);
};

void graph:: help(int u,vector<bool>&visited,vector<int>&disc,vector<int>&low,vector<int>&parent,vector<bool>&ap){
    static int time=0;
    visited[u]=true;
    int children=0;
    disc[u]=low[u]=++time;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(!visited[v]){
            children++;
            parent[v]=u;
            help(v,visited,disc,low,parent,ap);
            
            low[u]=min(low[u],low[v]);
            if(parent[u]==-1 && children>1){
                ap[u]=true;
            }
            if(parent[u]!=-1 && low[v]>=disc[u]){
                ap[u]=true;
            }
        }
        else if(v!=parent[u]){
            low[u]=min(low[u],disc[v]);
        }
    }
}

void graph::articulationPoint(){
    vector<bool>visited(v,false);
    vector<bool>ap(v,false);
    vector<int>disc(v);
    vector<int>low(v);
    vector<int>parent(v,-1);

    for(int i=0;i<v;i++){
        if(!visited[i]){
            help(i,visited,disc,low,parent,ap);
        }
    }

    for (int i = 0; i < v; i++)
        if (ap[i] == true)
            cout << i << " ";

}

int main(){

    cout << "\nArticulation points in first graph \n";
    graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.articulationPoint();

}