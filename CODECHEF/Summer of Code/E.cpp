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
for(ll i=0;i<n;i++) cin>>v[i];

for(int i=0;i<n-1;i++){
    ll g=__gcd(v[i],v[i+1]);
    ll pro=v[i]*v[i+1];
    v[i+1] = pro/g;

}
ll lcm=v[n-1];

ll count=0;
while(lcm <= k){
    count++;
    lcm+=v[n-1];
}
cout<<count<<endl;

}
}