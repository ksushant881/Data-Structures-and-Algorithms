#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)


void solve(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i*i*i<=n;i++){
        for(int j=i;i*j*j<=n;j++){
            cnt+=(n/i/j) - j + 1;
        }
    }
    cout<<cnt;
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}