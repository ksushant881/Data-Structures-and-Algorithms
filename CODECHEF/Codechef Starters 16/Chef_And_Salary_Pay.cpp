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
ll x,y;
cin>>x>>y;
string s;
cin>>s;
ll n=s.length();
ll sal=0,cnt=0;
ll maxLen=0,len=0;
ll ans=0;
for(ll i=0;i<n;i++){
    if(s[i]=='1') {
        cnt++;
        len++;
    }
    else{
        maxLen=max(maxLen,len);
        len=0;
    }
}
maxLen=max(maxLen,len);
// cout<<maxLen<<endl;
ans = cnt*x + maxLen*y;
cout<<ans<<endl;
}

int main(){
fastio
ll tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}