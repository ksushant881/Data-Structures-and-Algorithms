#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n,q;
cin>>n>>q;
vector<ll>v(n);
for(ll i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
vector<int>nos(n,0);
nos[0]=v[0]-1;
//cout<<nos[0]<<" ";
for(int i=1;i<n;i++){
    nos[i]=nos[i-1] + v[i]-v[i-1]-1;
    //cout<<nos[i]<<" ";
}
//cout<<endl;

for(int curr=0;curr<q;curr++){
    ll k;
    cin>>k;
    
    ll i;
    for(i=0;i<n;i++){
        if(nos[i] >= k) break;
    }
    i--;
    ll x,res;
    if(i==-1) {
        x=k;
        res=0;
    }
    else{
        x=k-nos[i];
        res=v[i];
    }
    res+=x;
    cout<<res<<endl;
}
}
}