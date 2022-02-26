#include <bits/stdc++.h>
using namespace std;
const int mod= 1e9+7;
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fpow(int a, int n) {
    int ans = 1;
    while (n) {
        if (n % 2)
            ans = ans * a % mod;
        a = a * a % mod;
        n /= 2;
    }
    return ans;
}

void solve(){
    int n,m;
    cin>>n>>m;
    int OR=0;
    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;
        OR |= x;
    }
    OR %= mod;
    OR = OR * fpow(2, n - 1) % mod;
    cout << OR << "\n";
    
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}