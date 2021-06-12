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

 ll n,w;
 cin >> n >> w;
 vector<pair<ll,ll>>v(n);
 for(int i=0;i<n;i++){
     ll a,b;
     cin>>a>>b;
     v[i]={a,b};
}

ll dp[n+1][w+1];
for(int i=0;i<=n;i++) dp[i][0]=0;
for(int i=0;i<=w;i++) dp[0][i]=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=w;j++){
        if(v[i-1].first > j){
            dp[i][j] = dp[i-1][j];
        }
        else{
            dp[i][j]=max(v[i-1].second+dp[i-1][j-v[i-1].first],dp[i-1][j]);
        }
    }
}
cout<<dp[n][w];


}
}

