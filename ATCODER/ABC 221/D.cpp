#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>>arr;
    int playersActive=0;
    f(i,n){
        ll a,b;
        cin>>a>>b;
        arr.push_back({a,1});
        arr.push_back({a+b,-1});
    }
    vector<int>ans(n+100,0);
    sort(arr.begin(),arr.end());
    f(i,arr.size()-1){
        playersActive+=arr[i].second;
        ans[playersActive]+=((arr[i+1].first) - (arr[i].first));
    }
    f(i,n-1) cout<<ans[i+1]<<" ";
    cout<<ans[n];
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