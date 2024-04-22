#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    f(i,n){
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans=0;
    for(auto x:mp){
        if(x.second>=3) ans+=x.second/3;
    }
    cout<<ans<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}