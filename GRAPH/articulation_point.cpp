#include<iostream>
#include<list>

using namespace std;

class graph{
    public:
        vector<int>adj[];

        void addEdge(vector<int>adj[],int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        


};