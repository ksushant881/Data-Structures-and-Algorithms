#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Recursive Solution
int ans=INT_MAX;
void solve1(vector<int>arr,int k,int n,int curr,int cost){
    if(curr==n-1){
        ans=min(ans,cost);
        return;
    }
    if(curr>n-1) return;
    for(int i=1;i<=k;i++){
        solve1(arr,k,n,curr+i,cost+abs(arr[curr]-arr[curr+i]));
    }
}

//DP solution
int solve2(vector<int>arr,int k,int n){
    vector<int>dp(n,INT_MAX);
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=i+k;j++){
            if(j < n) 
                dp[j] = min(abs(arr[i]-arr[j])+dp[i],dp[j]);
                //cout<<dp[j]<<"here"<<endl;
        }
    }
    return dp[n-1];
}

int main(){
fastio
 
ll n;
ll k;
cin>>n>>k;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

// solve1(arr,k,n,0,0);
// cout<<ans;

cout<<solve2(arr,k,n);
}