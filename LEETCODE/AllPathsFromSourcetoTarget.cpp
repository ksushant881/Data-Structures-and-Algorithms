#include<bits/stdc++.h>
using namespace std;

class solution2 {
public:
    
    void dfs(vector<vector<int>>& graph,int curr,int target,vector<int>&path,vector<vector<int>>&res,vector<bool>&visited){
        if(visited[curr]==true) {path.pop_back(); return;}
        if(curr==target){path.push_back(curr); res.push_back(path); return;}
        //visited[curr]=true;
        path.push_back(curr);
        int k=graph[curr].size();
        if(k==0) {path.pop_back();  return;}
        for(k=0;k<graph[curr].size();k++)
            dfs(graph,graph[curr][k],target,path,res,visited);
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        int target = graph.size()-1;
        int n = graph[0].size();
        for(int i=0;i<n;i++){
            vector<int>path;
            vector<bool>visited(target,false);
            path.push_back(0);
            dfs(graph,graph[0][i],target,path,res,visited);
        }
        return res;
    }
};


class Solution{
    public:

    void dfs(vector<vector<int>>& graph,vector<vector<int>>&res,vector<int>&path,int curr){
        path.push_back(curr);
        if(curr == graph.size()-1){
            res.push_back(path);
        }
        else{
            for(auto x:graph[curr]){
                dfs(graph,res,path,x);
            }
        }
        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>path;
        dfs(graph,res,path,0);
        return res;
    }
};

int main(){
vector<vector<int>>graph1={
    {1,2},
    {3},
    {3},
    {}
};

vector<vector<int>>graph2={
    {4,3,1},
    {3,2,4},
    {3},
    {4},
    {}
};

vector<vector<int>>graph3={
    {1},
    {}
};

vector<vector<int>>graph4={
    {1,2,3},
    {2,3},
    {}
};

vector<vector<int>>graph5={
    {1,3},
    {2},
    {3},
    {}
};

Solution s;
vector<vector<int>>v = s.allPathsSourceTarget(graph4);

for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
}