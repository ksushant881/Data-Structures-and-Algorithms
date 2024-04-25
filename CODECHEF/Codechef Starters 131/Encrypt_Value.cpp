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
    vector<ll>arr(n);
    f(i,n)cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll sum=arr[0];
    f(i,n){
        if(i==0)continue;
        if(arr[i]==1 or sum == 1){
            sum = (sum+arr[i])%mod;
        } else {
            sum = (sum*arr[i])%mod;
        }
    }
    cout<<sum<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}