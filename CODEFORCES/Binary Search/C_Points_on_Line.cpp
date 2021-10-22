#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){

ll n,d;
cin>>n>>d;
vector<ll>arr(n);
sort(arr.begin(),arr.end());
f(i,n) cin>>arr[i];
ll ans;
for(int i=0;i<n;i++){
    ll high = n-1;
    ll low = 0;
    ll res=0;
    while(high >= low){
        ll mid = low+(high-low)/2;
        if(arr[i] + d >= arr[mid]){
            res=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    ll nos = res-i;
    ans+=(nos*(nos-1))/2;
}
cout<<ans;
return;
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}