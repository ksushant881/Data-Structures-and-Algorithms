#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=1;i<=n;i++)

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
ll n;
cin>>n;
if(n==1){
    puts("NO");
    return 0;
}
// set<ll>st;
// for(ll i=1;i<=1e5+1;i++){
//     st.insert(1ll*(i*(i+1))/2);
// }
// for(auto x:st){
//     // cout<<x<<endl;
//     if(n-x > 0 && st.count(n-x)){
//         puts("YES");
//         return 0;
//     }
// }
// puts("NO");
// return 0;
for(int i=1;i*i<=n;i++){
    ll curr = (i*(i+1))/2;
    ll find = (ll)sqrt(2*(n-curr));
    if(curr + (find*(find+1))/2 == n){
        // cout<<i<<" "<<(find*(find+1))/2<<endl;
        puts("YES");
        return 0;
    }
}
puts("NO");
return 0;

}

}