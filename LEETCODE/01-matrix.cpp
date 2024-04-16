#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    temp.push_back({i,j});
                } else {
                    mat[i][j] = -1;
                    // cout<<i<<" "<<j<<endl;
                }
            }
        }
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        vector<pair<int,int>>temp2;
        for(auto x:temp){
           
            for(int i=0;i<4;i++){
                int nr = x.first + dx[i];
                int nc = x.second + dy[i];

                if(nr >=0 and 
                        nr < n and 
                        nc >= 0 and 
                        nc < m and 
                        mat[nr][nc] == -1) {
                    mat[nr][nc] = mat[x.first][x.second] + 1;
                    temp2.push_back({nr,nc});            
        }
        return mat;
    }
};

int main(){
    Solution s;
    vector<vector<int>>arr={
        {0,0,0},{0,1,0},{1,1,1}
    };
    arr= s.updateMatrix(arr);
    for(auto x:arr){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}