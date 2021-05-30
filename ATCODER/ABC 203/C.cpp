#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>>v;
for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    v.push_back({a,b});

}
sort(v.begin(),v.end());
ll res=k;
for(ll i=0;i<n;i++){
    if(v[i].first<=res){
        res+=v[i].second;
    }
}
cout<<res;
}