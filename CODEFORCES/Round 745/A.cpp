#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

ll fact(ll n){
	if (n <= 1) return 1;
  	else return n*(fact(n-1)%mod);
}

ll modFact(ll n, ll p)
{
    if (n >= p)
        return 0;
 
    ll result = 1;
    for (ll i = 3; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

ll n;
cin>>n;
cout<<modFact(2*n,mod)<<endl;

}

}