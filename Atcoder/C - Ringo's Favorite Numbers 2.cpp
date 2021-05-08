#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++) cin>>arr[i];
ll count=0; 
vector<ll>mp(200,0);
for(ll i =0;i<n;i++) mp[arr[i]%200]++;
for(ll i =0;i<200;i++){
        if(mp[i]!=0)
        count+=((mp[i]*(mp[i]-1))/2);
}

cout<<count<<endl;
}