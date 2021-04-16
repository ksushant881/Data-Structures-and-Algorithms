#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int key;
    node*right,*left;

    node(int x){
        key=x;
        right=left=NULL;
    }

};

void BFS(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v+1;i++)
        visited[i]=false;
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();     
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            q.push(v);
            visited[v]=true;
        }
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

	cout << "Following is Breadth First Traversal: "<< endl; 
	BFS(adj,V,0); 

	return 0; 
} 
