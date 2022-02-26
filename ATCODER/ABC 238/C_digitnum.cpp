#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 998244353
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int dp[100005];
void solve(){
    string s;
    cin>>s;
    ll n=stoll(s);
    ll cnt=0;
    ll f=1;
    ll l=10;

    for(int i=1;i<=s.length()-1;i++){
        cout<<i<<" "<<f<<" "<<l-1<<endl;
        cnt+=(l-1-f+1);
        dp[i]=cnt;
        f*=10;
        l*=10;
    }
    
    cnt+=(n-f+1);
    dp[s.length()]=cnt;
    for(int i=2;i<=s.length();i++){
        dp[i]=dp[i]+dp[i-1];
    }
    cout<<dp[s.length()];
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}