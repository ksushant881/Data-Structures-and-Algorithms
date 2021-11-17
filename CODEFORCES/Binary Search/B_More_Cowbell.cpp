#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long 
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    int high=0,low=INT_MIN;
    f(i,n){
        high+=arr[i];
        low=max(low,arr[i]);
    }

    int ans = INT_MAX;
    while(high>=low){
        int mid = (high-low)/2 + low;
        int cnt=1;
        int s=0;
        for(int i=0;i<n;i++){
            s=s+arr[i];
            if(s>mid){
                s=arr[i];
                cnt++;
            }
        }

        if(cnt <= k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}