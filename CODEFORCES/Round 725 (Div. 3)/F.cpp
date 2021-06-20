#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll solve(ll n){
    ll ans=0;
    while(n){
        ans+=n;
        n=n/10;
    }
    return ans;
}
  
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
        ll l,r;
        cin>>l>>r;
        cout<<solve(r)-solve(l)<<endl;
}
}