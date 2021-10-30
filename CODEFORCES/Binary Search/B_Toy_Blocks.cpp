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

// int n;
// cin>>n; 
// ll a[n];
// ll ma=-1,s=0;
// for(ll i=0;i<n;i++)
// {
//     cin>>a[i];
//     ma=max(ma,a[i]);
//     s+=a[i];
// }
// if(s<=1LL*(n-1)*ma)
// {
//     cout<<1LL*(n-1)*ma-s;
// }
// else
// {
//     ll x=s%(n-1);
//     if(x!=0)
//     cout<<n-1-x;
//     else
//     cout<<0;
// }
// cout<<endl;

int n;
cin>>n;
vector<ll>arr(n);
ll mx=0,s=0;
f(i,n) {
    cin>>arr[i];
    s+=arr[i];
    mx=max(mx,arr[i]);
}
int temp = max((ll)ceil((s+n-2)/(n-1)),mx);
cout<<temp*(n-1) - s<<endl;


}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}