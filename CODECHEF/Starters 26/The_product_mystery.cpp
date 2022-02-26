#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    int b,c;
    cin>>b>>c;
    if(b%c==0){
        cout<<1<<endl;
        return;
    }
    int k=__gcd(b,c);
    k=c/k;
    cout<<k<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}