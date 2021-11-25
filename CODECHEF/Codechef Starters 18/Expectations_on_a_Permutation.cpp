#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define m 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll modexp(ll x, ll n){
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return modexp((x * x) % m, n / 2);
    }
    else {
        return (x * modexp((x * x) % m, (n - 1) / 2) % m);
    }
}
 
ll getFractionModulo(ll a, ll b){
    ll c = gcd(a, b);
    a = a / c;
    b = b / c;
    ll d = modexp(b, m - 2);
    ll ans = ((a % m) * (d % m)) % m;
    return ans;
}

ll fact(ll n){
    ll ans=1;
    for(int i=2;i<=n;i++) ans*=i;
    return ans;
}

void solve(){
    int n;
    cin>>n;
    ll sum=((((n*(n+1))/2)*(n+2))/3)*(3*n+1)/4 - ((n*(n+1))/2*(2*n+1))/3;
    ll perms = fact(n);
    // cout<<sum*(n-1)*2<<" "<<perms<<endl;
    cout<<getFractionModulo(sum*(n-1)*2,perms)<<endl; 
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}

