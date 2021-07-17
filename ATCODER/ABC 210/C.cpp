#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
//cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

ll n,k;
cin>>n>>k;
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}

map<ll,ll>mp;
for(ll i=0;i<k;i++){
    mp[v[i]]++;
}
ll res = mp.size();
for(int i=k;i<n;i++){
    mp[v[i-k]]--;
    if(mp[v[i-k]] == 0){
        mp.erase(v[i-k]);
    }
    mp[v[i]]++;
    ll curr = mp.size();
    res = max(res,curr);
}
cout<<res;

}
}