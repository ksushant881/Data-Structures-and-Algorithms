#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,m;
int a[105],b[105];
int cache[105][105];

int dp(int i,int j){
    if(i>=n && j>=m) return 0;
    int res1=0,res2=0,maxx=0;
    if(cache[i][j]!=-1) return cache[i][j];
    if(i<n && j<m){
        res1 = a[i] + dp(i+1,j);
        res2 = b[j] + dp(i,j+1);
    }
    else if(i>=n && j<m) res2 = b[j] + dp(i,j+1);
    else if(i<n && j>=m) res1 = a[i] + dp(i+1,j);
    maxx=max({maxx,res1,res2});
    cache[i][j]=maxx;
    return maxx;

}

void solve(){
    cin>>n;
    f(i,n) cin>>a[i];
    cin>>m;
    f(i,m) cin>>b[i];
    cout<<dp(0,0)<<endl;
}

signed main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){
    memset(cache,-1,sizeof(cache));
   solve();
}
}