#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    
    int ans=0;
    while(1){
        int cnt=arr[k-1];
        if(cnt==0) break;
        ans+=cnt;
        for(int i=0;i<k;i++){
            arr[i]-=cnt;
        }
        sort(arr.begin(),arr.end(),greater<int>());
    }
    cout<<ans;
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}