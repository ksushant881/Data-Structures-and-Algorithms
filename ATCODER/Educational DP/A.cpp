#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int solve(vector<ll>v,ll i,ll n,ll cost){
    if(i==n-1){
        return cost;
    }
    if(i>=n){
        return INT32_MAX;
    }
    return min(solve(v,i+1,n,cost+abs(v[i+1]-v[i])),solve(v,i+2,n,cost+abs(v[i+2]-v[i])));
}

int solveDP(vector<ll>v,ll n){
    int dp[n];
    dp[0]=0;
    dp[1]=abs(v[0]-v[1]);
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(v[i]-v[i-1]),dp[i-2]+abs(v[i]-v[i-2]));
    }
    return dp[n-1];
}

int main(){
fastio
 
ll n;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++) cin>>v[i];
cout<<solveDP(v,n);


}