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
ll n,m;
cin>>n>>m;
vector<ll>v(n);
map<ll,ll>mp1;
map<ll,ll>mp2;
for(ll i=0;i<n;i++) {cin>>v[i]; mp1[v[i]]++;}
vector<ll>arr(m);
for(ll i=0;i<m;i++) {cin>>arr[i]; mp2[arr[i]]++;}

vector<ll>res;
for(auto it=mp1.begin();it!=mp1.end();it++){
    if(it->second==1 && mp2[it->first]==1 && it->first%3==0){
        cout<<it->first<<"  ";
    }
}
}
}