#include<bits/stdc++.h>
using namespace std;

/*

Minimum spanning tree problem deals with 
1. connected
2. undirected
3.  weighted
graph
We have to find the tree with minimum sum of weights of edges


Prims algo is greedy and maintains two sets : Nodes in MST and Nodes not in MST

*/

class graph{
    public:
    int v;
    vector<pair<int,int>>*adj;

    void init(int vertices){
        v = vertices;
        adj = new vector<pair<int,int>>[v];
    }

    //undirected graph
    void addEdge(int u,int v,int weight){
        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    }

    void print(){
        for(int i=0;i<v;i++){
            for(auto x:adj[i]){
                cout<<i<<" "<<x.first<<" "<<x.second<<endl;
            }
            cout<<endl;
        }
    }

    int prims_MST(){
        vector<bool>mstSet(v,false);
        vector<int>keys(v,INT_MAX);
        keys[0] = 0;
        int ans=0;
        for(int count=0;count<v;count++){
            int minNode = -1;
            for(int j=0;j<v;j++){
                if(mstSet[j] == false){
                    if(minNode!=-1) minNode = min(keys[minNode],keys[j]);
                    else minNode = keys[j];
                }
            }
            ans+=keys[minNode];
            mstSet[minNode]=true;
            for(int i=0;i<adj[minNode].size();i++){
                if(mstSet[adj[minNode][i].first] == false){
                    keys[adj[minNode][i].first] = min(keys[adj[minNode][i].first],adj[minNode][i].second);
                }
            }
        }
        for(int i=0;i<v;i++){
            cout<<mstSet[i]<<" ";
            //cout<<keys[i]<<" ";
        }
        return ans;
    }
};


int main(){
    graph g;
    g.init(4);
    g.addEdge(0,1,5);
    g.addEdge(1,3,15);
    g.addEdge(0,2,8);
    g.addEdge(2,3,20);
    //g.print();
    cout<<g.prims_MST();
}