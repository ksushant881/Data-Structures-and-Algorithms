#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 998244353
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a[3005],b[3005];
int n;

ll dp(int prev,int i){
    if(i==n) return 0;

    for(int curr=max(prev,min(a[i],b[i]));curr<=max(a[i],b[i]);curr++){
        dp(curr,i+1);
    }
}

void solve(){
    cin>>n;
    f(i,n) cin>>a[i];
    f(i,n) cin>>b[i];
    ll ans=0;
    for(int i=min(a[0],b[0]);i<=max(a[0],b[0]);i++){
        ans = (ans + dp(i,1))%mod;
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}