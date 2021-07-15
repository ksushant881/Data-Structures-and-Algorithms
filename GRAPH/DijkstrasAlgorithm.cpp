#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

/*

1. It does not work for negative weight edges.
2. It does not work if we add some weight to every edge in a path because now no. of edges comes into play.
More no. of edges more weight added so shortest path may not remain shortest if it has high no. of edges.


*/

vector<int> dijkstras(vector<vector<int>>g,int src){
    int v = g.size();
    vector<int>dist(v,INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<bool>fin(v,false);
    for(int i=0;i<v;i++){
        pq.push({dist[i],i});
    }
    while(!pq.empty()){
        int node = pq.top().second;
        pq.pop();
        fin[node] = true;
        for(int i=0;i<v;i++){
            if(g[node][i] && !fin[i]){
                if(dist[i] > dist[node] + g[node][i]){
                    dist[i] = dist[node] + g[node][i];
                }
            }
        }
        for(int i=0;i<v;i++){
            if(!fin[i]){
                pq.push({dist[i],i});
            }
        }
    }
    return dist;
}

int main(){

    vector<vector<int>>g = {
        {0,5,10,0},
        {5,0,3,20},
        {10,3,0,2},
        {0,20,2,0}
    };
    int src = 0;
    vector<int>res = dijkstras(g,src);
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
}