#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        int m = queries.size();
        vector<vector<int>>arr(n);
        for(int i=0;i<n-1;i++){
            arr[i].push_back(i+1);
        }
        int i=0;
        // for(auto x:arr){
        //     cout<<i<<" :";
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     i++;
        //     cout<<endl;
        // }
        vector<int>ans;
        for(auto x:queries){
            arr[x[0]].push_back(x[1]);
            ans.push_back(shortestPathLength(0, n-1, arr));
        }
        return ans;
    }
    
    int shortestPathLength(int source, int destination, vector<vector<int>> &arr) {
        int n = arr.size();
        vector<int>dist(n, INT_MAX);
        vector<bool>visited(n, false);
        
        queue<int>q;
        q.push(source);
        visited[source] = true;
        dist[source] = 0;

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            // cout<<curr<<endl;
            
            for(int next: arr[curr]){
                if(!visited[next]){
                    // cout<<curr<<" "<<next<<endl;
                    dist[next] = dist[curr] + 1;
                    q.push(next);
                    visited[next] = true;
                }
            }
        }
        return dist[n-1];
    }
};

int main(){
    Solution s;
    vector<vector<int>>queries={{2,4},{0,2},{0,4}};
    vector<int>ans = s.shortestDistanceAfterQueries(5,queries);
    for(auto x: ans){
        cout<<x<<" ";
    }
}