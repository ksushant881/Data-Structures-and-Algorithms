#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    f(i,n){
        cin>>arr[i];
    }
    if(k==1 or n==1) {
        cout<<0<<endl;
        return;
    }
    vector<ll>temp1=arr;
    ll mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    for(int i=0;i<n;i++){
        temp1[i] = temp1[i]%k;
        if(temp1[i] < k/2){
            temp1[i]+=k;
        }
        mx=max(temp1[i],mx);
        mn=min(temp1[i],mn);
    }
    ll ans1=mx-mn;
    // for(auto x: temp1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    temp1=arr;
    mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    for(int i=0;i<n;i++){
        temp1[i] = temp1[i]%k;
        if(temp1[i] <= k/2){
            temp1[i]+=k;
        }
        mx=max(temp1[i],mx);
        mn=min(temp1[i],mn);
    }
    ll ans2 = mx-mn;

    temp1=arr;
    mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    for(int i=0;i<n;i++){
        temp1[i] = temp1[i]%k;
        mx=max(temp1[i],mx);
        mn=min(temp1[i],mn);
    }
    ll ans3 = mx-mn;
    cout<<min({ans1,ans2,ans3})<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}