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

ll n;
cin>>n;
vector<ll>v(n);
map<ll,ll>mp;
for(ll i=0;i<n;i++) {
    cin>>v[i];
    mp[v[i]]=i;
}
ll res=1;
// for(int i=n-1;i>=0;i--){
//     ll k = v[i]/2;
//     while(1){
//         if(mp.count(k)){
//             res = max(res,(i-mp[k]+1));
//             break;
//         }
//         else{
//             k++;
//         }
//     }
// }
// cout<<res<<endl;

ll i=0;

ll ans=0;
for(int i=0;i<n;i++){
    ll j=i;
    while (j + 1 < n && v[j + 1] <= v[j] * 2)
			++j;
    ans=max(ans,j-i+1);
    i=j;
}
cout<<ans<<endl;

}
}