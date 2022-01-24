#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cache[505][505][505];

int n,l,p;
int a[1005],d[1005];

int dp(int prev,int curr,int k){
    if(curr == n){
        return (d[curr]-d[prev])*a[prev];
    }
    int res = (d[curr]-d[prev])*a[prev] + dp(curr,curr+1,k);
    if(k>0) res = min(res,dp(prev,curr+1,k-1));
    return res;
}

void solve(){
    cin>>n>>l>>p;
    f(i,n) cin>>d[i];
    d[n]=l;
    f(i,n) cin>>a[i];

    for(int k=0;k<=p;k++){
        for(int j=0;j<=n;j++){
            for(int m=0;m<=n;m++){
                
            }
        }
    }

    cout<<dp(0,1,k)<<endl;

}



int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}