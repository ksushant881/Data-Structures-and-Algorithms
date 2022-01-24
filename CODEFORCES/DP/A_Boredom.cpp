#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    vector<int>count(100001,0);
    f(i,n){
        count[arr[i]]++;
    }
    vector<int>dp(100001,0);
    vector<int>points(100001,0);
    f(i,100001){
        points[i]=i*count[i];
    }
    dp[1]=points[1];
    dp[2]=max(points[2],points[1]);
    for(int i=3;i<100001;i++){
        dp[i] = max(dp[i-1],dp[i-2]+points[i]);
    }
    cout<<dp[100000]<<endl;
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}