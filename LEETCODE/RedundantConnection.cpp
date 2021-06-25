#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

class Solution1 {
public:
    bool dfs(vector<vector<int>>adj,int n,vector<bool>visited,int curr,int parent){
        visited[curr] = true;

        for(auto x: adj[curr]){
            if(visited[x]==false){
                if(dfs(adj,n,visited,x,curr) == true){
                    return true;
                }
            }
            else if(x != parent){
                return true;
            }
        }
        return false;
    }

    bool cycle(vector<vector<int>>adj,int n){
        bool ans = false;
        vector<bool>visited(n+1,false);
        for(int i=1;i<=n;i++){
            if(visited[i] == false){
                if(dfs(adj,n,visited,i,0)){
                    return true;
                }
            }
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>>adj(n+1);
        vector<int>res;
        for(int i=0;i<n;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        for(int i=n-1;i>=0;i--){
            adj[edges[i][0]].erase(remove(adj[edges[i][0]].begin(),adj[edges[i][0]].end(),edges[i][1]));
            adj[edges[i][1]].erase(remove(adj[edges[i][1]].begin(),adj[edges[i][1]].end(),edges[i][0]));

            if(!cycle(adj,n)){
                res.push_back(edges[i][0]);
                res.push_back(edges[i][1]);
                break;
            }
            else{
                adj[edges[i][0]].push_back(edges[i][1]);
                adj[edges[i][1]].push_back(edges[i][0]);
            }
        }
        return res;
    }
};

class DSU{
    public:
    int n;
    int *parent;
    int *rank;

    void init(int n){
        this->n = n;
        rank = new int[n+1];
        parent = new int[n+1];
        for(int i=1;i<=n;i++){
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findRep(int x){
        if(parent[x] == x) return x;
        parent[x] = findRep(parent[x]);
        return parent[x];
    }

    bool takeUnion(int x,int y){
        int x_rep = findRep(x);
        int y_rep = findRep(y);
        if(x_rep == y_rep) return true;
        if(rank[x_rep] > rank[y_rep]){
            parent[y_rep] = x_rep;
        }
        else if(rank[x_rep] == rank[y_rep]){
            parent[y_rep] = x_rep;
            rank[x_rep]++;
        }
        else{
            parent[x_rep] = y_rep;
        }
        return false;
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DSU d;
        vector<int>res;
        d.init(n);
        for(int i=0;i<n;i++){
            if(d.takeUnion(edges[i][0],edges[i][1])){
                res.push_back(edges[i][0]);
                res.push_back(edges[i][1]);
                break;
            }
        }
        return res;
    }
};

int main(){

    Solution s;
    vector<vector<int>>v1={{1,2},{1,3},{2,3}};
    vector<vector<int>>v2={{1,2},{2,3},{3,4},{1,4},{1,5}};
    vector<vector<int>>v3={{85,163},{37,148},{22,167},{60,114},{66,179},{53,118},{15,133},{52,70},{19,198},{147,184},{20,125},{76,153},{94,132},{98,127},{144,180},{2,109},{144,161},{89,197},{62,174},{81,149},{76,168},{36,197},{11,122},{140,145},{87,134},{131,154},{86,134},{3,80},{37,135},{36,163},{88,144},{24,109},{18,113},{57,115},{13,194},{9,104},{20,104},{36,78},{71,78},{59,174},{59,111},{107,192},{74,112},{85,190},{108,197},{21,157},{15,91},{74,130},{38,62},{127,145},{99,171},{115,168},{41,175},{75,168},{67,179},{21,68},{125,180},{63,124},{114,188},{17,69},{155,175},{61,196},{43,165},{10,189},{129,139},{152,174},{71,186},{86,146},{4,131},{7,193},{152,178},{77,160},{26,149},{92,179},{141,155},{121,164},{14,135},{28,70},{15,182},{85,177},{33,123},{10,30},{25,150},{19,105},{76,101},{45,58},{146,173},{79,96},{183,190},{40,124},{128,151},{142,153},{46,175},{50,156},{19,64},{64,174},{54,73},{67,114},{27,30},{12,110},{80,195},{48,184},{42,124},{99,102},{156,166},{150,199},{29,90},{106,166},{59,139},{44,67},{141,167},{81,123},{99,115},{19,100},{95,116},{21,97},{1,46},{55,73},{118,195},{148,151},{29,192},{47,98},{156,194},{32,133},{90,189},{18,101},{39,108},{35,58},{94,164},{24,129},{84,115},{113,147},{19,120},{15,187},{125,127},{23,118},{158,193},{6,93},{89,130},{51,190},{83,117},{46,181},{143,191},{11,165},{100,143},{9,122},{60,193},{49,83},{68,96},{5,37},{8,105},{124,126},{48,82},{46,116},{94,137},{147,159},{7,169},{56,74},{5,155},{103,185},{154,160},{56,185},{77,151},{79,132},{10,17},{53,65},{172,177},{31,136},{10,54},{7,165},{113,173},{47,119},{31,72},{93,144},{153,176},{31,123},{12,27},{94,199},{35,68},{102,200},{162,176},{94,170},{138,153},{15,102},{144,178},{106,151},{3,45},{70,149},{23,49},{81,196},{28,34},{21,61},{17,150},{40,154},{48,51},{78,192},{16,74},{116,158},{12,16},{13,34}};
    vector<int>res1 = s.findRedundantConnection(v1);
    print(res1);
    vector<int>res2 = s.findRedundantConnection(v2);
    print(res2);
    vector<int>res3 = s.findRedundantConnection(v3);
    print(res3);



}