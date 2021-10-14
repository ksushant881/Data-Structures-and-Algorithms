#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 998244353
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n;
cin>>n;
int a[n],b[n];
f(i,n) cin>>a[i];
f(i,n) cin>>b[i];
ll ans=1;
ans = abs(a[n-1]-b[n-1]+1);

for(int i=n-2;i>=0;i--){
    int count = abs(max(a[i],b[i-1])-max(b[i],a[i-1])+1);
    ans = (ans*count)%mod;
}
cout<<ans;

}

}