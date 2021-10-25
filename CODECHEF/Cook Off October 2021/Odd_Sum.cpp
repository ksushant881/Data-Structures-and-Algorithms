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
    ll ans=1;
    if(n == 1) {
        cout<<ans<<"\n";
        return;
    }
    ll c=((n-2)*(n-1));
    ans+=c;
    cout<<ans<<"\n";
    return;
}

int main(){
fastio
ll tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}