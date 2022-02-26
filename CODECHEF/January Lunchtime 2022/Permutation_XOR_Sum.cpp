#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll flip(ll n){
    ll no = 0,cnt = 0;
    while(n){
        if(n%2 == 0) no += (1LL<<cnt);
        n /= 2,cnt++;
        if(n <= 0) break;
    }
    return no;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt=1; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
        {
            ll a = flip(n);
            ll b = n;
            if((b&(b+1)) == 0) b--;
            ll val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
}