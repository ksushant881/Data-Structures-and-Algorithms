#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=0;i<n;i++)

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    f(i,n) cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll prefix[n+1];
    prefix[0]=0;
    for(ll i=0;i<n;i++) prefix[i+1]=prefix[i]+arr[i];
    pair<ll,ll>res={1,arr[0]};
    f(i,n){
        ll low=i,high=n-1;
        ll ans=i;
        while(low<=high){
            ll mid = low + (high-low)/2;
            ll final_sum = (mid-i+1)*arr[mid];
            ll curr_sum = prefix[mid+1]-prefix[i];
            ll req = final_sum - curr_sum;
            if(req <= k){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        ll len = ans-i+1;
        if(len > res.first){
            res = {len,arr[ans]};
        }
    }
    cout<<res.first<<" "<<res.second<<endl;
    return;
}

int main(){
fastio
solve();

}