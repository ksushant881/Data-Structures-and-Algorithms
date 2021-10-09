#include<bits/stdc++.h>
using namespace std;

class listNode{
    public:
        int val;
        listNode*next;
};

template<typename T>
class Graph{
    int v;
    list<int>*l;

    public:

    Graph(int v){
        this -> v = v;
        l = new list<int>(v);
    }   

    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(int src){
        map<int,bool>visited;
        queue<int>q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";
            for(int node : l[curr]){
                if(!visited[node]){
                    q.push(node);
                    visited[node]=true;
                }
            }
        }
    }
};

int main(){
    Graph<int>g;

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(3,0);

    g.bfs(0);
}