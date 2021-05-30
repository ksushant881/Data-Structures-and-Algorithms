#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n,m,k,f;
cin>>n>>k>>f;
vector<pair<ll,ll>> v;
for(ll i=0;i<n;i++){
ll a,b;
cin>>a>>b;
v.push_back({a,b});
}
sort(v.begin(),v.end());
ll res=0;
res+=v[0].first;
ll x=v[0].first,y=v[0].second;
for(ll i=1;i<n;i++){
if(v[i].first>y){
res+=v[i].first-y;
 y=max(y,v[i].second);
}
else{
y=max(y,v[i].second);
}
}

res+=(f-y);
if(res>=k)
cout<<"YES"<<endl;
else
 cout<<"NO"<<endl;
}
}