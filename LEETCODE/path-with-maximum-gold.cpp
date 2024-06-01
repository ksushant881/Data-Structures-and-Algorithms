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
    int getMaxGold(vector<vector<int>>& arr, int x,int y, vector<vector<bool>>& visited, int n, int m){
        visited[x][y] = true;
        int sum=0;
        for(int i=0;i<4;i++){
            int new_x = x+dx[i];
            int new_y = y+dy[i];
            if(new_x>=0 and new_x<n and new_y>=0 and new_y<m and arr[new_x][new_y]!=0 and !visited[new_x][new_y]){
                s
            }
        }
        return sum;
    }

    int getMaximumGold(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<bool>>visited(n, vector<bool>(m,false));
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]!=0 and !visited[i][j]){
                    int currAns = getMaxGold(arr,i,j,visited,n,m);
                    ans = max(ans, currAns);
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.
}