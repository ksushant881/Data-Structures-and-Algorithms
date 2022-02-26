#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    ll p=1;
    f(i,n-1) p*=(i+1);
    if(__gcd(p%n,n)==1){
        cout<<n-1<<endl;
        f(i,n-1)cout<<i+1<<" ";
        return;
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}