#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>>g(n+1);
        vector<int>indegree(n+1,0);
        for(int i=0;i<relations.size();i++){
            g[relations[i][0]].push_back(relations[i][1]);
            indegree[relations[i][1]]++;
        }
        int ans=0;
        queue<int>q;
        vector<long long int> maxTime(n+1,0);
        for(int i=1;i<=n;i++){
            maxTime[i]=time[i-1];
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int m = q.size();
            for(int i=0;i<m;i++){
                int curr = q.front();
                q.pop();
                
                for(int i=0;i<g[curr].size();i++){
                    maxTime[g[curr][i]] = max(maxTime[g[curr][i]],maxTime[curr]+time[g[curr][i]-1]);
                    indegree[g[curr][i]]--;
                    if(indegree[g[curr][i]] == 0) q.push(g[curr][i]);
                }
            }
        }
        for(int value : maxTime)
            ans = max(ans , value);
        return ans;
    }
};

int main(){
    vector<vector<int>> r1={{1,3},{2,3}};
    vector<int>t1={3,2,5};
    Solution s;
    cout<<s.minimumTime(3,r1,t1)<<endl;
    vector<vector<int>> r2={{1,5},{2,5},{3,5},{3,4},{4,5}};
    vector<int>t2={1,2,3,4,5};
    cout<<s.minimumTime(5,r2,t2)<<endl;
    
    vector<vector<int>> r3 = {{2,7},{2,6},{3,6},{4,6},{7,6},{2,1},{3,1},{4,1},{6,1},{7,1},{3,8},{5,8},{7,8},{1,9},{2,9},{6,9},{7,9}};
    vector<int>t3 = {9,5,9,5,8,7,7,8,4};
    cout<<s.minimumTime(9,r3,t3)<<endl;

}