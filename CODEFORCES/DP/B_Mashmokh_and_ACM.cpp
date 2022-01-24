#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;
    cin>>n>>k;
    // int dp[k+1][n+1];
    vector<vector<int>>dp(k+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            dp[i][j]++;
        }
    }
    cout<<dp[k][n];
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}