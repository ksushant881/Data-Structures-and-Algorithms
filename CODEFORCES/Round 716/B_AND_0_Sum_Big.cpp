#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int efficentModularExponentiation(ll x,ll n){
    if(x==0) return 0;
    int res=1;
    while(n>0){
        if(n&1) res = (res*x)%mod;
        n = n>>1;
        x = (x*x)%mod;
    }
    return res;
}

void solve(){
    int n,k;
    cin>>n>>k;
    cout<<efficentModularExponentiation(n,k)<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}