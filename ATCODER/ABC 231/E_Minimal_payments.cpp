#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

map<int,map<int,int>>mp;

int dp(int sum,int i,vector<int>&arr){
    if(i<0) return sum;
    if()
    int res = sum/arr[i];
    int w1 = res + dp(sum-res*arr[i],i-1);
    int w2 = res + 1 + dp(arr[i]*(res+1) - sum,i-1);
    mp[sum][i] = min(w1,w2);
    return mp[sum][i];
}

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];

}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}