#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    string s;
    vector<vector<char>>arr;
    vector<vector<bool>>v;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    bool ans = false;
    void dfs(int x,int y,string curr){
        if(x>=0 and x<arr.size() and y>=0 and y<arr[0].size()){
            curr+=arr[x][y];
            if(s.substr(0,curr.length()) != curr) return;
            if(s == curr) {
                ans = true;
                return;
            }
            for(int i=0;i<4;i++){
                dfs(x+dx[i],y+dy[i],curr);
            }
        }
    }

    bool exist(vector<vector<char>>& board, string word) {
        arr=board;
        s=word;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                dfs(i,j,"");
            }
        }
        return ans;
    }
};

int main(){
    
}