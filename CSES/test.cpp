#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int solve2(int n){
    vector<int>dp(n+1,0);
    dp[1]=1;
    for(int i=2;i<=n;i++){
        ll res=0;
        if(i>=1) res=(res%mod+dp[i-1]%mod)%mod;
        if(i>=2) res=(res%mod+dp[i-2]%mod)%mod;
        if(i>=3) res=(res%mod+dp[i-3]%mod)%mod;
        if(i>=4) res=(res%mod+dp[i-4]%mod)%mod;
        if(i>=5) res=(res%mod+dp[i-5]%mod)%mod;
        if(i>=6) res=(res%mod+dp[i-6]%mod)%mod;
        if(i<=6) res=(res%mod+1%mod)%mod;
        dp[i] = res;
    }
    return dp[n];
}
int main(){
fastio
ll n;
cin >> n;
cout<<solve2(n);
}