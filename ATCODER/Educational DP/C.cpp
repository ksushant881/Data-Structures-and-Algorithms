#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

 ll n;
 cin>>n;
 vector<vector<ll>>v(n,vector<ll>(3,0));
 for(int i=0;i<n;i++){
     ll a,b,c;
     cin>>a>>b>>c;
     v[i][0]=a;
     v[i][1]=b;
     v[i][2]=c;
 }

vector<vector<ll>>dp(n,vector<ll>(3));
dp[0][0]=v[0][0];
dp[0][1]=v[0][1];
dp[0][2]=v[0][2];

for(int i=1;i<n;i++){
    dp[i][0]=max(dp[i-1][1],dp[i-1][2])+v[i][0];
    dp[i][1]=max(dp[i-1][0],dp[i-1][2])+v[i][1];
    dp[i][2]=max(dp[i-1][0],dp[i-1][1])+v[i][2];
}
cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});

}
}