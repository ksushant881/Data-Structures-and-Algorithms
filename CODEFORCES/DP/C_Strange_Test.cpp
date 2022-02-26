#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int a,b;

int dp(int x,int y){
    if(y==(x|y)) return 1;
    if(y>x) return INT_MAX;
    int res =1+dp(x+1,y);
    res = min(res,1+dp(x,y+1));
    return res;
}

void solve(){
    cin>>a>>b;
    cout<<dp(a,b)<<endl;
    int d = b-a;
    int ans=d;
    for(int i=1;i<=d;i++){
        ans=min(ans,i+1+)
    }
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}