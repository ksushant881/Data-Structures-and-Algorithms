#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;

    ll high=n*m;
    ll low=1;
    ll ans=1;
    while(high >= low){
        ll mid = low + (high-low)/2;
        ll count=0;

        //count the number of numbers less than mid
        //in O(n) complexity
        for(ll i=1;i<=n;i++){
            if(i<=mid){
                ll res = mid/i;
                res = min(res,m);
                count+=res;
            }
        }
        
        if(count >= k){
            ans=mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans;
    return;
}

int main(){
fastio
solve();
}