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
ll n,a,b;
cin>>n>>a>>b;
// if((n%__gcd(a,b)) == 0){
//     cout<<"YES"<<endl;
    for(ll i=0;i<=n;i++){
        ll y=n-(a*i);
        if(y >= 0 && y%b == 0){
            cout<<"YES"<<endl;
            cout<<i<<" "<<y/b<<endl;
            return 0;
        }
    }
// }
// else{
    cout<<"NO"<<endl;
// }



}

}