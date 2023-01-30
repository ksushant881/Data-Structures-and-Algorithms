#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    int odd=0,even=0;
    int ans=0;
    f(i,n) {
        cin>>arr[i];
        ans+=arr[i];
        if(arr[i]&1) odd++;
        else even++;
    }
    while(q--){
        int k,m;
        cin>>k>>m;
        if(k==1) ans+=(odd*m);
        else ans+=(even*m);
        if(m&1 and k==1) {
            even = even+odd;
            odd=0;
        }
        if(k==0 and m&1){
            odd = odd + even;
            even = 0;
        }
        cout<<ans<<endl;
    }
    // 1 2 4
    // 1 4 6
    // 4 4 6
    // 4 9 11
}

signed main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}