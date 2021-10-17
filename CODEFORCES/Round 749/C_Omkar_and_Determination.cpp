#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio
ll n,m;
cin>>n>>m;
vector<string>arr(n);
f(i,n) cin>>arr[i];
ll dp[m];
f(i,m) dp[i]=0;
for(ll i=1;i<n;i++){
    for(ll j=1;j<m;j++){
        if(arr[i-1][j]==arr[i][j-1] && arr[i-1][j]=='X'){
            dp[j]=1;
        }
    }
}
for(ll i=1;i<m;i++){
    dp[i] = dp[i] + dp[i-1];
}
ll q;
cin>>q;
while(q--){
    ll x,y;
    cin>>x>>y;
    ll diff = dp[y-1]-dp[x-1];
    if(diff!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

}