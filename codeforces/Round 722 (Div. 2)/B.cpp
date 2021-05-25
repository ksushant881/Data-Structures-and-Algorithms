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
ll n;
cin>>n;
vector<ll>v(n);
vector<ll>neg;
ll minPos=INT32_MAX;
for(ll i=0;i<n;i++){
    cin>>v[i];
    if(v[i]<=0) neg.push_back(v[i]);
    if(v[i]>0) minPos=min(minPos,v[i]);
}
if(neg.size()==0){cout<<1<<endl; continue;}
sort(neg.begin(),neg.end());
ll diff=INT32_MAX;
if(neg.size()>1){
for(int i=0;i<neg.size()-1;i++){
    diff=min(diff,abs(neg[i+1]-neg[i]));
}
}
if(neg.size()==1) diff=neg[0];

ll ans=neg.size();

if(diff==INT32_MAX){
    cout<<ans<<endl;
}

if(abs(diff) >= minPos){
    ans++;
}
cout<<ans<<endl;
}
}