#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[101];
int n;
int cache[101][100005];

int dp(int i,int sum){
    if(sum==0) return 1;
    if(i==n){
        if(sum==0) return 1;
        else return 0;
    }
    if(cache[i][sum]!=-1) return cache[i][sum];
    int res = dp(i+1,sum);
    if(res==0 and arr[i]<=sum){
        res = dp(i+1,sum-arr[i]);
    }
    cache[i][sum]=res;
    return res;
}


void solve(){
    cin>>n;
    int s=0;
    memset(cache,-1,sizeof(cache));
    f(i,n) {
        cin>>arr[i];
        s+=arr[i];
    }
    int k=(s%2==0)?s/2:(s+1)/2;
    for(int i=k;i<=s;i++){
        if(dp(0,i)){
            cout<<i;
            return;
        }
    }
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}