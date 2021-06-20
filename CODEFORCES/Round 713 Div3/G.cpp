#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//solution upto 10^5
// map<ll,ll>mp;
// ll solve(ll n){
//     ll sum=0;
//     for(ll i=1;i<=n;i++){
//         if(n%i == 0){
//             sum+=i;
//         }
//     }
//     return sum;
// }

// void solve2(){
//     ll i=10000;
//     while(i--){
//         ll x=solve(i);
//         mp[x]=i;
//     }
// }


ll mp[10000001];
int at[10000001];
void solve2(){
    for(ll i=1;i<=10000000;i++){
        at[i]=-1;
        for(ll j=i;j<=10000000;j+=i){
            mp[j]+=i;
        }
    }
    for(ll i=10000000;i>=1;i--){
        if(mp[i]<=10000000)
            at[mp[i]]=i;
    }
}

int main(){
fastio

solve2();

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll c;
cin >> c;
cout<<at[c]<<endl;
}
}