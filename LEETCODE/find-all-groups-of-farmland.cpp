#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    void dfs(vector<vector<int>>&arr,int i, int j, int n, int m, int &x,int &y){
        arr[i][j]=2;
        for(int k=0;k<4;k++){
            if(i+dx[k] >= 0 and i+dx[k] < n and j+dy[k] >= 0 and j+dy[k] < m and arr[i+dx[k]][j+dy[k]] == 1) {
                x=max(x,i+dx[k]);
                y=max(y,j+dy[k]);
                dfs(arr,i+dx[k],j+dy[k],n,m,x,y);
            }
        }
    }


    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size();
        int m = land[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j] == 1){
                    int x=i,y=j;
                    dfs(land, i,j,n,m,x,y);
                    ans.push_back({i,j,x,y});
                }
            }
        }
        return ans;
    }
};

void print(vector<vector<int>> arr){
    for(auto x:arr){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Solution s;
    vector<vector<int>> land1={
        {1,0,0},{0,1,1},{0,1,1}
    };

    print(s.findFarmland(land1));

}