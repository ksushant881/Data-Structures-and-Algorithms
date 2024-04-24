#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int gcdSum(ll n){
    ll sum = 0,temp=n;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    return __gcd(n,sum);
}

void solve(){
    ll n;
    cin>>n;
    if(gcdSum(n) != 1){
        cout<<n<<endl;
    } else if(gcdSum(n+1) != 1){
        cout<<n+1<<endl;
    } else {
        cout<<n+2<<endl;
    }

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}