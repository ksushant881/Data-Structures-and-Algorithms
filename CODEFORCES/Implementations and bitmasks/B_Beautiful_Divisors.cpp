#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(ll i=0;i<n;i++)

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

ll div=1;
f(i,32){
    if(i==0) continue;
    
    ll x = (((1<<i)-1)<<(i-1));
    if(x>n) {
        cout<<div<<endl;
        return 0;
    }
    if(n%x == 0){
        div=x;
    }
    
}

}

}