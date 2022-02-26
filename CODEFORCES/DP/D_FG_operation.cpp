#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 998244353
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    vector<int>ans(10,0);
    ans[arr[0]]=1;
    for(int i=1;i<n;i++){
        vector<int>temp(10,0);
        for(int j=0;j<10;j++){
            temp[(j+arr[i])%10]+=ans[j]%mod;
            temp[(j*arr[i])%10]+=ans[j]%mod;
        }
        for(int j=0;j<10;j++){
            ans[j]=temp[j];
        }
    }
    for(int i=0;i<10;i++){
        cout<<ans[i]%mod<<"\n";
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