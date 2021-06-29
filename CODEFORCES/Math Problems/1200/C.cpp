#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
    ll n,c;
    cin>>n>>c;
    bool flag=false;
    
    for(ll i=1;i<=n/2;i++){
        ll c = n - 2*i;
        if((c*i)/__gcd(i,c)<=n/2){
            cout<<i<<" "<<i<<" "<<c<<endl;
            break;
        }
    }
}
}