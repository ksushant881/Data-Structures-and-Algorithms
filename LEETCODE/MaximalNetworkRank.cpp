#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<set<int>>graph(n);
        int m=roads.size();
        for(int i=0;i<m;i++){
            graph[roads[i][0]].insert(roads[i][1]);
            graph[roads[i][1]].insert(roads[i][0]);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // cout<<ans<<" "<<i<<" "<<graph[i].size()<<" "<<endl;
                // ans = max(ans,(int)graph[i].size()+(int)graph[j].size()-1);
                if(i==j) continue;
                int curr = graph[i].size()+graph[j].size();
                if(graph[i].count(j)) curr--;
                ans = max(ans,curr);
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>>v1={{0,1},{0,3},{1,2},{1,3}}; int n1=4;
    vector<vector<int>>v2={{0,1},{0,3},{1,2},{1,3},{2,3},{2,4}}; int n2=5;
    vector<vector<int>>v3={{0,1},{1,2},{2,3},{2,4},{5,6},{5,7}}; int n3=8;
    Solution s;
    cout<<s.maximalNetworkRank(n1,v1)<<endl;
    cout<<s.maximalNetworkRank(n2,v2)<<endl;
    cout<<s.maximalNetworkRank(n3,v3)<<endl;
}