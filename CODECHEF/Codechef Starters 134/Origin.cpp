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
    ll ans = 0;
    ll k = 9*5;
    ll a = n/9;
    ll b = n%9;
    ans = a*k + b*(b+1)/2;
    cout<<ans<<endl;
}



int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}