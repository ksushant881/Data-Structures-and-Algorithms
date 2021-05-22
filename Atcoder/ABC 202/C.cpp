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
vector<ll>a(n);
vector<ll>b(n);
vector<ll>c(n);

map<ll,vector<ll>>mp;
for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]].push_back(i);
}
for(ll i=0;i<n;i++){
    cin>>b[i];
}
for(ll i=0;i<n;i++){
    cin>>c[i];
}

ll count=0;
for(int i=0;i<n;i++){
    if(mp.find(b[c[i]-1])!=mp.end()){
        count+=mp.find(b[c[i]-1])->second.size();
    }
}
cout<<count;
}