#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int pre[100005];
int n=100004;
int k;

int ans(int a,int b){
    return (pre[b]-pre[a-1]);
}

void solve(){
    int t;
    cin>>t>>k;
    int dp[n];
    
    for(int i=0;i<n;i++){
        if(i<k) dp[i]=1;
        else dp[i] = (dp[i-1]+dp[i-k]+mod)%mod;
    }
    // for(auto x:dp) cout<<x<<" ";
    pre[0]=0;
    for(int i=1;i<n;i++){
        pre[i]=dp[i]+pre[i-1];
    }

    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(ans(a,b)+mod)%mod<<endl;
    }
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}