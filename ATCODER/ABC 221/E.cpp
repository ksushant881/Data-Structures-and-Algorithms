#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 998244353
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;cin>>n;
    vector<ll>arr(n);
    f(i,n) cin>>arr[i];
    vector<vector<ll>>ans(n);
    for(ll i=n-2;i>=0;i--){
        for(ll j=i+1;j<n;j++){
            if(arr[j] >= arr[i]){
                ans[i].push_back(j);
            }
        }
    }
    ll res=0;
    for(ll i=n-2;i>=0;i--){
        for(ll j=0;j<ans[i].size();j++){
            ll items = ans[i][j] - i + 1 - 2;
            res = (res + (1<<items))%mod;
        }
    }
    cout<<res<<endl;
    return;
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

solve();

}

}