#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
// cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n,k;
cin>>n>>k;
vector<pair<ll,ll>>v(n+1);
map<ll,ll>mp;
for(ll i=0;i<n;i++) {
    cin>>v[i].first;
    mp[v[i].first] = i;
}

if(k%n==0){
    ll res=k/n;
    for(ll i=0;i<n;i++){
        cout<<res<<endl;
    }
    continue;
}

if(n==1){
    cout<<k<<endl;
    continue;
}

ll common = k/n;
ll left = k%n;
set<ll>st;
ll count=0;
for(auto x:mp){
    st.insert(x.second);
    count++;
    if(count==left) break;
}

for(ll i=0;i<n;i++){
    if(st.find(i)==st.end()){
        cout<<common<<endl;
    }
    else{
        cout<<common+1<<endl;
    }
}
}
}