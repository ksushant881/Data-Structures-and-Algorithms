#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll k,d;
ll cache[101][2];

ll dp(ll sum,int x) {
    if(sum == 0) {
        if(x==1) return 1;
        else return 0;
    }
    if(cache[sum][x] != -1) return cache[sum][x];

    ll lar = min(sum,k);
    ll res = 0;
    for(int i=1;i<=lar;i++) {
        if(i < d) {
            res = res + dp(sum - i, x);
        }
        else {
            res = res + dp(sum-i,1);
        }
        res = res%mod;
    }

    cache[sum][x]=res;
    return res;

}

int main(){
    ll n;
    for(int i=0;i<101;i++) for(int j=0;j<2;j++) cache[i][j]=-1;
    cin>>n>>k>>d;
    cout<<dp(n,0)<<"\n";

}