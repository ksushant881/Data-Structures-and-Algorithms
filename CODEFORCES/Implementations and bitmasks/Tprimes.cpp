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

bool isPrime(ll n){
    if(n == 1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0) return false;
    }
    return true;
}

bool solve(ll n){
    ll x=sqrt(n);
    if(x*x == n){
        if(isPrime(x)) return true;
    }
    return false;
}



int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n;
cin>>n;
vector<ll>arr(n);
f(i,n){
    cin>>arr[i];
    if(arr[i] == 1) {
        cout<<"NO"<<endl;
        continue;
    }
    if(solve(arr[i])) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
}
}