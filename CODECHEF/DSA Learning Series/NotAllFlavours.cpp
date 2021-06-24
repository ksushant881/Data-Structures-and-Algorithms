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
ll n,k;
cin>>n>>k;

vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}

ll j=0;
ll res=1;
ll len=0;
map<ll,ll>mp;
for(int i=0;i<n;i++){
    mp[v[i]]++;
    len++;
    if(mp.size()!=k) res=max(res,len);
    else{
        mp[v[j]]--;
        if(mp[v[j]] == 0){
            mp.erase(v[j]);
        }
        len--;
        j++;
    }
}
cout<<res<<endl;
// 1 1 1 2 2 1
//01 1 1 2 2 2

}
}