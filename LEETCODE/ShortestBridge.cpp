#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:

    int dy[4] = {0,0,-1,1};
    int dx[4] = {-1,1,0,0};

    int shortestBridge(vector<vector<int>>& arr) {
        int n = arr[0].size();
        vector<vector<bool>>visited(n,vector<bool>(n,false));

        set<pair<int,int>>st1,st2;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] == 1 and !visited[i][j]){
                    
                    if(st1.empty()){
                        dfs(st1,visited,arr,i,j,n);
                    } else {
                        dfs(st2,visited,arr,i,j,n);
                    }
                }
            }
        }

        int ans = INT_MAX;
        // cout<<st1.size()<<" "<<st2.size()<<endl;
        for(auto x:st1){
            for(auto y:st2){
                ans = min(ans,abs(x.first-y.first)+abs(x.second-y.second)-1);
                // cout<<abs(x.first-y.first)+abs(x.second-y.second)<<endl;
            }
        }

        return ans;        
    }

    void dfs(set<pair<int,int>>&st, vector<vector<bool>>&visited, vector<vector<int>>&arr,int i,int j,int n) {
        if(i>=n or i<0 or j>=n or j<0 or arr[i][j]!=1 or visited[i][j]) return;

        visited[i][j] = true;
        st.insert({i,j});
        for(int k=0;k<4;k++){
            dfs(st,visited,arr,i+dy[k],j+dx[k],n);
        }
    }

};

int main(){
    Solution s;
    vector<vector<int>> grid = {
        {1,1,1,1,1},
        {1,0,0,0,1},
        {1,0,1,0,1},
        {1,0,0,0,1},
        {1,1,1,1,1}
    };
    cout<<s.shortestBridge(grid);
}