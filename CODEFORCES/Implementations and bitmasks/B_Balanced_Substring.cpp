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

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n;
cin>>n;
string s;
cin>>s;

int x=0,y=0;
f(i,n){
    if(s[i]=='1') x++;
    else y++;
}
if(x==0 || y==0){
    cout<<0<<endl;
    return 0;
}
map<ll,ll>mp;
mp[0]=0;
ll cnt=0,ans=0;;
f(i,n){
    if(s[i]=='1') cnt++;
    else cnt--;
    if(mp.find(cnt)!=mp.end()){
        ans=max(ans,i-mp[cnt]+1);
    }
    else{
        mp[cnt]=i+1;
    }
}
cout<<ans<<endl;


















// ll ans=0;
// ll k = n%2==0?n:n-1;
// for(ll len=k;len>=0;len-=2){
//     ll zer=0,one=0;
//     for(ll i=0;i<len;i++){
//         if(s[i]=='1') one++;
//         else zer++;
//     }
//     if(one == zer){
//         ans = max(ans,len);
//         break;
//     }
//     else{
//         for(ll i=len;i<n;i++){
//             if(s[i-len]=='0') zer--;
//             else one--;
//             if(s[i]=='0') zer++;
//             else one++;
//             if(one == zer){
//                 ans = max(ans,len);
//                 break;
//             }
//         }
//     }
//     if(ans!=0) break;
// }
// cout<<ans<<endl;






}

}