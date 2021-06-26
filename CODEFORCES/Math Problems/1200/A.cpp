#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll tc=1;
cin >> tc;
for(ll casess=0;casess<tc;casess++){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[v[i] - i]++;
    }

    ll res=0;
    for(auto x:mp){
        res+=x.second*(x.second-1)/2;
    }
    cout<<res<<endl;
}
}