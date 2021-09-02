#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Graph {
    int V; 
    list<int>* adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    ~Graph();
    void addEdge(int v, int w);
    void connectedComponents(int &q);
};
    

void Graph::connectedComponents(int &cnt){
    bool* visited = new bool[V];
    for (int v = 0; v < V; v++)
        visited[v] = false;
 
    for (int v = 0; v < V; v++) {
        if (visited[v] == false) {
            DFSUtil(v, visited);
            cnt++;
        }
    }
    delete[] visited;
}
 
void Graph::DFSUtil(int v, bool visited[]){
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
Graph::~Graph() { delete[] adj; }
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
vector<int>v(n+1);
for(int i=1;i<=n;i++) cin>>v[i];
Graph g(n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j-i != v[j]-v[i]){
            g.addEdge(i-1,j-1);
        }
    }
}
int cnt=0;
g.connectedComponents(cnt);
cout<<cnt<<endl;

}

}