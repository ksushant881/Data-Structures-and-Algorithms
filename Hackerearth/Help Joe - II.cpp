#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n,m;
cin>>n>>m;
vector<ll>v(n);
for(ll i=0;i<n;i++) cin>>v[i];
ll q;
cin>>q;
while(q--){
    ll x;
    cin>>x;
    ll res=INT32_MIN;
    for(ll i=0;i<n;i++){
        res=max(res,(v[i]+x)%m);
    }
    cout<<res<<endl;
}
}