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

ll n,k,x;
cin>>n>>k>>x;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
vector<pair<ll,pair<ll,ll>>>gaps;
ll listLen = 1;
ll groups=1;

for(ll i=1;i<n;i++){
    ll curr = v[i] - v[i-1];
    if(curr > x) {
        gaps.push_back({curr,{v[i],v[i-1]}});
        listLen = 1;
    }
    else{
        listLen++;
    }
    if(listLen == 1) groups++;
}
//cout<<groups<<endl;
// for(auto m: v){
//     cout<<m<<" ";
// }
// cout<<endl;
// for(auto x: gaps){
//     cout<<x.second.first<<" "<<x.second.second<<endl;
// }

if(k==0){
    cout<<groups<<endl;
    continue;
}
//cout<<"hello";
sort(gaps.begin(),gaps.end());
int res = groups;
for(auto m:gaps){
    ll curr = m.first-1;
    ll nos = curr/x;
    if(nos > k) continue;
    else{
        k-=nos;
        res--;
    }
}
cout<<res<<endl;

}
}