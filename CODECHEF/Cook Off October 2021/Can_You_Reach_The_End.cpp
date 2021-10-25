#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
ll n;
cin>>n;
ll dp[n+1][n+1];
memset(dp,0,sizeof(dp));

f(i,n){
    ll x,y;
    cin>>x>>y;
    dp[x][y]=1;
}
if((dp[1][2] == 1 && dp[2][1] == 1) || (dp[n-1][n] == 1 && dp[n][n-1] ==1)){
    cout<<"NO"<<"\n";
    return;
}
for(ll j=2;j<=n;j++){
    ll i;
    for(i=1;i<=j;i++){
        // cout<<i<<" "<<j-i+1<<" here"<<endl;
        // if(dp[i][j-i+1] == 0){
        //     break;
        // }
    }
    // if(i>j){
    //     cout<<"NO"<<"\n";
    //     return;
    // }
}
for(int i=n-1;i>=2;i--){
    int j;
    for(int j=0;j<i;j++){
        cout<<i+j<<" "<<n-j<<" here"<<endl;
        // if(dp[i+j][n-j] == 0){
        //     break;
        // }
    }
    // if(j>i){
    //     cout<<"NO"<<"\n";
    //     return;
    // }
}

cout<<"YES"<<"\n";
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}