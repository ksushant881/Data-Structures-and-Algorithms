#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=0;i<n;i++)

void solve(){
ll n;
cin>>n;
ll arr[n];
ll totalSum=0LL;
f(i,n) cin>>arr[i];
f(i,n) totalSum+=arr[i];

sort(arr,arr+n);
ll m;
cin>>m;


while(m--){
    ll x,y;
    cin>>x>>y;
    ll res=2e18;
    //greater than equal to
    if(arr[n-1] >= x){
        ll ans=n-1;
        ll high=n-1,low=0;
        while(high>=low){
            ll mid=(low+high)/2;
            if(arr[mid] >= x){
                ans = mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        ll left = totalSum - arr[ans];
        ll temp=0;
        if(y > left) temp=y-left;
        res=min(res,temp);
    }
    //less than
    if(arr[0] < x){ 
        ll high=n-1,low=0;  
        ll ans=0; 
        while(high>=low){
            ll mid=(high+low)/2;
            if(arr[mid] < x){
                ans = mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        ll temp = x - arr[ans];
        ll left = totalSum - arr[ans];
        if(left<y) temp = temp + y - left;
        res=min(res,temp);
    }

    
    cout<<res<<"\n";
}
}

int main(){
fastio
ll tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}