#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int dx[4]={-1,1,0,0};
int dy[4] = {0,0,-1,1};

bool isValidIndex(int x,int y);

void fill(vector<string>&arr,vector<vector<int>>&ans, int x, int y){
    int n = arr.size();
    int m = arr[0].length();
    if(x-1>=0 and y)
    
    for(int i=0;i<4;i++){
        int new_x = x+dx[i];
        int new_y = y+dy[i];

    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>arr(n);
    f(i,n){
        cin>>arr[i];
    }
    vector<vector<int>>ans(n,vector<int>(m,-1));

    f(i,n){
        f(i,m){
            if(arr[i][j]=='0'){
                fill(arr,ans,i,j);
            }
        }
    }


}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}