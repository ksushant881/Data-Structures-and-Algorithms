#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int r;;
    cin>>r;
    ll ans=0;
    ll a = 1 ;
    ll b = 1;
    ll t = 0;
    for(int i=0;i<=r;i++){
        t+=floor(sqrt(r*r - i*i));
        // cout<<t<<endl;
    }
    a+=4*t;
    t=0;
    for(int i=0;i<=r+1;i++){
        t+=floor(sqrt((r+1)*(r+1) - i*i));
    }
    b+=4*t;
    cout<<b-a<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}