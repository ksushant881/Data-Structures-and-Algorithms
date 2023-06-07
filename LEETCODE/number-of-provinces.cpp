#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class UsingDFS {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n,false);
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,visited,isConnected);
                cnt++;
            }
        }
        return cnt;
    }
    
    void dfs(int curr,vector<bool>&visited,vector<vector<int>>& arr){
        visited[curr] = true;
        for(int i=0;i<arr.size();i++){
            if(curr!=i and arr[curr][i] == 1 and !visited[i]){
                dfs(i,visited,arr);
            }
        }
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        queue<int>q;
        int n = isConnected.size();
        q.push(1);
        int cnt = 0;
        while(!q.empty()){
            int head = q.front();
            for(int i=0;i<n and i!=head;i++){
                if(isConnected[head][i]){
                    q.push(i);
                }
            }
        }
    }
};

int main(){

}