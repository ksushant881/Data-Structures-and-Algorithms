#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int dx[5]={0,-1,0,1,0};
int dy[5]={0,0,1,0,-1};

map<int,int>mp;


void dfs(int &size,vector<vector<int>>&arr,int n,int m,int i,int j,vector<vector<bool>>&done){
    if(i==n || i<0 || j==m || j<0 || done[i][j]) {
        cout<<arr[i][j]<<" ";
        return;
    }
    done[i][j]=true;
    size++;
    for(int k=1;k<=4;k++){
        int sf1 = 4-k;
        int sf2 = mp[sf1];
        if(    i+dx[k]>=0 
            && j+dy[k]>=0 
            && i+dx[k]<n 
            && j+dy[k]<m
            && !done[i+dx[k]][j+dy[k]] 
            && ((arr[i][j] & (1<<sf1)) == 0) 
            && ((arr[i+dx[k]][j+dy[k]] & (1<<sf2)) == 0)
            ) {
                // cout<<arr[i][j]<<" "<<arr[i+dx[k]][j+dy[k]]<<" call "<<size<<endl;
            dfs(size,arr,n,m,i+dx[k],j+dy[k],done);
        }
        else continue;
    }
}// 31 20 13 02

int main(){
fastio
mp[1]=3;
mp[3]=1;
mp[0]=2;
mp[2]=0;
int n,m;
cin>>n>>m;
vector<vector<int>>arr(n,vector<int>(m));
f(i,n) {
    f(j,m) {
        cin>>arr[i][j];
    }
}
vector<vector<bool>>done(n,vector<bool>(m,false));
vector<int>rooms;

f(i,n){
    f(j,m){
        if(!done[i][j]){
            int s=0;
            dfs(s,arr,n,m,i,j,done);
            // cout<<s<<endl;
            rooms.push_back(s);
        }
    }
}
sort(rooms.begin(),rooms.end(),greater<int>());
for(auto x:rooms){
    cout<<x<<" ";
}
cout<<endl;
return 0;

}