#include<iostream>
#include<stack>
using namespace std;

void DFS(vector<int>adj[],bool visited[],int s,stack<int>st){
    visited[s]=true;
    //cout<<s<<" ";
    for(int x:adj[s]){
        if(visited[x]==false){
            DFS(adj,visited,x);
        }
    }
    st.push(s);
}

void DFSutil(vector<int>adj[],int v){
    stack<int>st;
    bool visited[v];
    for(Int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            DFS(adj[],visited,i,st);
        }
    }
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
}